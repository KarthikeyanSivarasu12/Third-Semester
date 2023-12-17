
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a task node
struct node
{
    int task_id;
    int priority;
    char description[100];
    int height;
    struct node *leftchild;
    struct node *rightchild;
};

// Structure to represent a user
struct User
{
    char username[50];
    char password[50];
};

int taskCounter = 1;
int userCount = 0;
struct User users[100]; // Assuming a maximum of 100 users

// Function to create a new task node
struct node *createTask(int priority, const char *description)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->task_id = taskCounter++;
    newNode->priority = priority;
    newNode->height = 1;
    strcpy(newNode->description, description);
    newNode->leftchild = newNode->rightchild = NULL;
    return newNode;
}

// AVL tree functions...

// GTK-specific variables
GtkWidget *text_view;
GtkWidget *username_entry;
GtkWidget *password_entry;
GtkWidget *description_entry;
GtkWidget *priority_entry;
struct node *rootnode = NULL; // AVL tree root

void print_to_text_view(const char *text)
{
    GtkTextBuffer *buffer;
    GtkTextIter iter;

    buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    gtk_text_buffer_get_end_iter(buffer, &iter);
    gtk_text_buffer_insert(buffer, &iter, text, -1);
}

void register_button_clicked(GtkWidget *widget, gpointer data)
{
    printf("Enter a username: ");
    scanf("%s", users[userCount].username);

    printf("Enter a password: ");
    scanf("%s", users[userCount].password);

    userCount++;
    printf("User registered successfully!\n");
    print_to_text_view("User registered successfully!\n");
}

int authenticateUser(const char *username, const char *password)
{
    for (int i = 0; i < userCount; ++i)
    {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
        {
            return 1; // Authentication successful
        }
    }
    return 0; // Authentication failed
}

void login_button_clicked(GtkWidget *widget, gpointer data)
{
    const char *username = gtk_entry_get_text(GTK_ENTRY(username_entry));
    const char *password = gtk_entry_get_text(GTK_ENTRY(password_entry));

    if (authenticateUser(username, password))
    {
        print_to_text_view("Login successful!\n");
        // Continue to task management functionalities
    }
    else
    {
        print_to_text_view("Login failed. Invalid username or password.\n");
    }
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int heightofnode(struct node *node)
{
    if (node == NULL)
    {
        return -1;
    }
    int leftheight, rightheight;

    leftheight = heightofnode(node->leftchild);
    rightheight = heightofnode(node->rightchild);

    return max(leftheight, rightheight) + 1;
}

int balancefactorofnode(struct node *requirednode)
{
    if (requirednode == NULL || (requirednode->leftchild == NULL && requirednode->rightchild == NULL))
    {
        printf("The node is not present in the tree or it is a leaf node\n");
        return 0;
    }
    else
    {
        int leftsubtreeheight = heightofnode(requirednode->leftchild);
        int rightsubtreeheight = heightofnode(requirednode->rightchild);
        return (leftsubtreeheight - rightsubtreeheight);
    }
}

struct node *LLoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->leftchild == NULL)
    {
        return ancestor;
    }

    struct node *child, *temp;
    child = ancestor->leftchild;

    temp = child->leftchild;
    child->rightchild = ancestor;
    child->rightchild->leftchild = temp;
    child->rightchild->rightchild = ancestor->rightchild;

    ancestor->height = heightofnode(ancestor);
    child->height = heightofnode(child);

    return child;
}

struct node *RRoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->rightchild == NULL)
    {
        return ancestor;
    }

    struct node *child, *temp;
    child = ancestor->rightchild;

    temp = child->leftchild;
    child->leftchild = ancestor;
    child->leftchild->rightchild = temp;
    child->leftchild->leftchild = ancestor->leftchild;

    ancestor->height = heightofnode(ancestor);
    child->height = heightofnode(child);

    return child;
}

struct node *RLoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->leftchild == NULL)
    {
        return ancestor;
    }

    ancestor->leftchild = RRoperation(ancestor->leftchild);
    return LLoperation(ancestor);
}

struct node *LRoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->rightchild == NULL)
    {
        return ancestor;
    }

    ancestor->rightchild = LLoperation(ancestor->rightchild);
    return RRoperation(ancestor);
}

struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current->leftchild != NULL)
    {
        current = current->leftchild;
    }
    return current;
}

struct node *updateHeightAndRotate(struct node *rootnode)
{
    if (rootnode == NULL)
    {
        return rootnode;
    }

    rootnode->height = heightofnode(rootnode);

    int balance = balancefactorofnode(rootnode);

    if (balance > 1)
    {
        if (balancefactorofnode(rootnode->leftchild) >= 0)
        {
            return LLoperation(rootnode);
        }
        else
        {
            return LRoperation(rootnode);
        }
    }
    if (balance < -1)
    {
        if (balancefactorofnode(rootnode->rightchild) <= 0)
        {
            return RRoperation(rootnode);
        }
        else
        {
            return RLoperation(rootnode);
        }
    }

    return rootnode;
}

struct node *insertTask(struct node *rootnode, int priority, const char *description)
{
    if (rootnode == NULL)
    {
        return createTask(priority, description);
    }

    if (priority < rootnode->priority || (priority == rootnode->priority && taskCounter % 2 == 0))
    {
        rootnode->leftchild = insertTask(rootnode->leftchild, priority, description);
    }
    else
    {
        rootnode->rightchild = insertTask(rootnode->rightchild, priority, description);
    }

    return updateHeightAndRotate(rootnode);
}

void printInOrder(struct node *rootnode)
{
    if (rootnode != NULL)
    {
        printInOrder(rootnode->leftchild);
        char buffer[1000];
        sprintf(buffer, "Task ID: %d, Priority: %d, Description: %s\n", rootnode->task_id, rootnode->priority, rootnode->description);
        print_to_text_view(buffer);
        printInOrder(rootnode->rightchild);
    }
}

void printAsTree(struct node *root, int level)
{
    if (root != NULL)
    {
        for (int i = 0; i < level; i++)
        {
            print_to_text_view("    ");
        }
        char buffer[1000];
        sprintf(buffer, "|--[%d, %d, %s]\n", root->task_id, root->priority, root->description);
        print_to_text_view(buffer);

        printAsTree(root->rightchild, level + 1);
        printAsTree(root->leftchild, level + 1);
    }
}

struct node *deleteNode(struct node *rootnode, int priority)
{
    if (rootnode == NULL)
    {
        return rootnode;
    }

    if (priority < rootnode->priority || (priority == rootnode->priority && taskCounter % 2 == 0))
    {
        rootnode->leftchild = deleteNode(rootnode->leftchild, priority);
    }
    else if (priority > rootnode->priority || (priority == rootnode->priority && taskCounter % 2 != 0))
    {
        rootnode->rightchild = deleteNode(rootnode->rightchild, priority);
    }
    else
    {
        if (rootnode->leftchild == NULL || rootnode->rightchild == NULL)
        {
            struct node *temp = rootnode->leftchild ? rootnode->leftchild : rootnode->rightchild;

            if (temp == NULL)
            {
                temp = rootnode;
                rootnode = NULL;
            }
            else
            {
                *rootnode = *temp;
            }

            free(temp);
        }
        else
        {
            struct node *temp = minValueNode(rootnode->rightchild);
            rootnode->task_id = temp->task_id;
            rootnode->priority = temp->priority;
            strcpy(rootnode->description, temp->description);
            rootnode->rightchild = deleteNode(rootnode->rightchild, temp->priority);
        }
    }

    if (rootnode == NULL)
    {
        return rootnode;
    }

    return updateHeightAndRotate(rootnode);
}

void freeAVLTree(struct node *rootnode)
{
    if (rootnode != NULL)
    {
        freeAVLTree(rootnode->leftchild);
        freeAVLTree(rootnode->rightchild);
        free(rootnode);
    }
}

void add_task_button_clicked(GtkWidget *widget, gpointer data)
{
    const char *description = gtk_entry_get_text(GTK_ENTRY(description_entry));
    int priority = atoi(gtk_entry_get_text(GTK_ENTRY(priority_entry)));

    if (userCount > 0)
    {
        rootnode = insertTask(rootnode, priority, description);
        print_to_text_view("Task added successfully!\n");
    }
    else
    {
        print_to_text_view("Please log in first.\n");
    }
}

void view_tasks_button_clicked(GtkWidget *widget, gpointer data)
{
    char buffer[1000] = "\n--- Tasks ---\n";
    sprintf(buffer, "\n--- Tasks ---\n");
    print_to_text_view(buffer);
    FILE *stream;
    stream = fopen("output.txt", "w");
    fprintf(stream, "\n--- Tasks ---\n");
    fclose(stream);
    printInOrder(rootnode);
}

void delete_task_button_clicked(GtkWidget *widget, gpointer data)
{
    int priority = atoi(gtk_entry_get_text(GTK_ENTRY(priority_entry)));
    rootnode = deleteNode(rootnode, priority);
    print_to_text_view("Task deleted successfully!\n");
}

void print_tree_button_clicked(GtkWidget *widget, gpointer data)
{
    print_to_text_view("\n--- Task Tree ---\n");
    if (rootnode != NULL)
    {
        printAsTree(rootnode, 0);
    }
    else
    {
        print_to_text_view("No tasks available.\n");
    }
}

void exit_button_clicked(GtkWidget *widget, gpointer data)
{
    freeAVLTree(rootnode);
    print_to_text_view("Exiting the program. Memory freed.\n");
    gtk_main_quit();
}

int main(int argc, char *argv[])
{
    // GTK Initialization
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Task Manager");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a vertical box to hold the UI elements
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create an entry for username
    username_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(username_entry), "Username");
    gtk_box_pack_start(GTK_BOX(vbox), username_entry, FALSE, FALSE, 0);

    // Create an entry for password
    password_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(password_entry), "Password");
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE);
    gtk_box_pack_start(GTK_BOX(vbox), password_entry, FALSE, FALSE, 0);

    // Create a button to register
    GtkWidget *register_button = gtk_button_new_with_label("Register");
    g_signal_connect(register_button, "clicked", G_CALLBACK(register_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), register_button, FALSE, FALSE, 0);

    // Create a button to login
    GtkWidget *login_button = gtk_button_new_with_label("Login");
    g_signal_connect(login_button, "clicked", G_CALLBACK(login_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), login_button, FALSE, FALSE, 0);

    // Create a text view to display messages
    text_view = gtk_text_view_new();
    gtk_text_view_set_editable(GTK_TEXT_VIEW(text_view), FALSE);
    gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(text_view), FALSE);
    gtk_box_pack_start(GTK_BOX(vbox), text_view, TRUE, TRUE, 0);

    // Create an entry for task description
    description_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(description_entry), "Task Description");
    gtk_box_pack_start(GTK_BOX(vbox), description_entry, FALSE, FALSE, 0);

    // Create an entry for task priority
    priority_entry = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(priority_entry), "Task Priority");
    gtk_box_pack_start(GTK_BOX(vbox), priority_entry, FALSE, FALSE, 0);

    // Create a button to add a task
    GtkWidget *add_task_button = gtk_button_new_with_label("Add Task");
    g_signal_connect(add_task_button, "clicked", G_CALLBACK(add_task_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(vbox),add_task_button, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), add_task_button, FALSE, FALSE, 0);

// Create a button to view tasks
GtkWidget *view_tasks_button = gtk_button_new_with_label("View Tasks");
g_signal_connect(view_tasks_button, "clicked", G_CALLBACK(view_tasks_button_clicked), NULL);
gtk_box_pack_start(GTK_BOX(vbox), view_tasks_button, FALSE, FALSE, 0);

// Create a button to delete a task
GtkWidget *delete_task_button = gtk_button_new_with_label("Delete Task");
g_signal_connect(delete_task_button, "clicked", G_CALLBACK(delete_task_button_clicked), NULL);
gtk_box_pack_start(GTK_BOX(vbox), delete_task_button, FALSE, FALSE, 0);

// Create a button to print the tree
GtkWidget *print_tree_button = gtk_button_new_with_label("Print Tree");
g_signal_connect(print_tree_button, "clicked", G_CALLBACK(print_tree_button_clicked), NULL);
gtk_box_pack_start(GTK_BOX(vbox), print_tree_button, FALSE, FALSE, 0);

// Create a button to exit
GtkWidget *exit_button = gtk_button_new_with_label("Exit");
g_signal_connect(exit_button, "clicked", G_CALLBACK(exit_button_clicked), NULL);
gtk_box_pack_start(GTK_BOX(vbox), exit_button, FALSE, FALSE, 0);

// Show all widgets
gtk_widget_show_all(window);

// Run the GTK main loop
gtk_main();

return 0;
}


