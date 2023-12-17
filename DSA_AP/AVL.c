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

int taskCounter = 1;

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

// Function to find the maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Function to calculate the height of a node
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

// Function to calculate the balance factor of a node
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

// Function to perform LL rotation
struct node *LLoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->leftchild == NULL)
    {
        // Invalid input or LL operation not applicable
        return ancestor;
    }

    struct node *child, *lstofchild, *rstofchild, *rstofancestor;
    struct node *temp;
    child = ancestor->leftchild;

    lstofchild = child->leftchild;
    rstofchild = child->rightchild;
    rstofancestor = ancestor->rightchild;

    temp = lstofchild;
    child->rightchild = ancestor;
    child->rightchild->leftchild = temp;
    child->rightchild->rightchild = rstofancestor;

    // Update heights
    ancestor->height = heightofnode(ancestor);
    child->height = heightofnode(child);

    return child;
}

// Function to perform RR rotation
struct node *RRoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->rightchild == NULL)
    {
        // Invalid input or RR operation not applicable
        return ancestor;
    }

    struct node *child, *lstofchild, *rstofchild, *lstofancestor;
    struct node *temp;
    child = ancestor->rightchild;

    lstofchild = child->leftchild;
    rstofchild = child->rightchild;
    lstofancestor = ancestor->leftchild;

    temp = rstofchild;
    child->leftchild = ancestor;
    child->leftchild->rightchild = temp;
    child->leftchild->leftchild = lstofancestor;

    // Update heights
    ancestor->height = heightofnode(ancestor);
    child->height = heightofnode(child);

    return child;
}

// Function to perform RL rotation
struct node *RLoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->leftchild == NULL)
    {
        // Invalid input or RL operation not applicable
        return ancestor;
    }

    ancestor->leftchild = RRoperation(ancestor->leftchild);
    return LLoperation(ancestor);
}

// Function to perform LR rotation
struct node *LRoperation(struct node *ancestor)
{
    if (ancestor == NULL || ancestor->rightchild == NULL)
    {
        // Invalid input or LR operation not applicable
        return ancestor;
    }

    ancestor->rightchild = LLoperation(ancestor->rightchild);
    return RRoperation(ancestor);
}

// Function to find the node with the minimum value in a tree
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current->leftchild != NULL)
    {
        current = current->leftchild;
    }
    return current;
}

// Function to update the height and perform rotations if needed
struct node *updateHeightAndRotate(struct node *rootnode)
{
    if (rootnode == NULL)
    {
        return rootnode;
    }

    // Update height of the current node
    rootnode->height = heightofnode(rootnode);

    // Check balance factor
    int balance = balancefactorofnode(rootnode);

    // Perform rotations if needed
    if (balance > 1)
    {
        if (balancefactorofnode(rootnode->leftchild) >= 0)
        {
            // LL case
            return LLoperation(rootnode);
        }
        else
        {
            // LR case
            return LRoperation(rootnode);
        }
    }
    if (balance < -1)
    {
        if (balancefactorofnode(rootnode->rightchild) <= 0)
        {
            // RR case
            return RRoperation(rootnode);
        }
        else
        {
            // RL case
            return RLoperation(rootnode);
        }
    }

    return rootnode;
}

// Function to insert a task into the AVL Tree
struct node *insertTask(struct node *rootnode, int priority, const char *description)
{
    if (rootnode == NULL)
    {
        return createTask(priority, description);
    }

    if (priority < rootnode->priority || (priority == rootnode->priority && taskCounter % 2 == 0))
    {
        // Insert into the left subtree
        rootnode->leftchild = insertTask(rootnode->leftchild, priority, description);
    }
    else
    {
        // Insert into the right subtree
        rootnode->rightchild = insertTask(rootnode->rightchild, priority, description);
    }

    // Update height and perform rotations
    return updateHeightAndRotate(rootnode);
}

// Function to print the tree in-order based on priority
void printInOrder(struct node *rootnode)
{
    if (rootnode != NULL)
    {
        printInOrder(rootnode->leftchild);
        printf("Task ID: %d, Priority: %d, Description: %s\n", rootnode->task_id, rootnode->priority, rootnode->description);
        printInOrder(rootnode->rightchild);
    }
}

void printAsTree(struct node *root, int level)
{
    if (root != NULL)
    {
        // Increase the spacing based on the level
        for (int i = 0; i < level; i++)
        {
            printf("    ");
        }

        // Print current node with details
        printf("|--[%d, %d, %s]\n", root->task_id, root->priority, root->description);

        // Recursive call for right and left subtrees
        printAsTree(root->rightchild, level + 1);
        printAsTree(root->leftchild, level + 1);
    }
}


// Function to delete a node in binary search tree based on priority
struct node *deleteNode(struct node *rootnode, int priority)
{
    if (rootnode == NULL)
    {
        return rootnode;
    }

    if (priority < rootnode->priority || (priority == rootnode->priority && taskCounter % 2 == 0))
    {
        // Node to be deleted is in the left subtree
        rootnode->leftchild = deleteNode(rootnode->leftchild, priority);
    }
    else if (priority > rootnode->priority || (priority == rootnode->priority && taskCounter % 2 != 0))
    {
        // Node to be deleted is in the right subtree
        rootnode->rightchild = deleteNode(rootnode->rightchild, priority);
    }
    else
    {
        // Node with the priority found

        // Node with only one child or no child
        if (rootnode->leftchild == NULL || rootnode->rightchild == NULL)
        {
            struct node *temp = rootnode->leftchild ? rootnode->leftchild : rootnode->rightchild;

            // No child case
            if (temp == NULL)
            {
                temp = rootnode;
                rootnode = NULL;
            }
            else // One child case
            {
                *rootnode = *temp; // Copy the contents of the non-empty child
            }

            free(temp);
        }
        else
        {
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            struct node *temp = minValueNode(rootnode->rightchild);

            // Copy the inorder successor's data to this node
            rootnode->task_id = temp->task_id;
            rootnode->priority = temp->priority;
            strcpy(rootnode->description, temp->description);

            // Delete the inorder successor
            rootnode->rightchild = deleteNode(rootnode->rightchild, temp->priority);
        }
    }

    // If the tree had only one node, then return
    if (rootnode == NULL)
    {
        return rootnode;
    }

    // Update height and perform rotations
    return updateHeightAndRotate(rootnode);
}

// Function to free the memory of the AVL Tree
void freeAVLTree(struct node *rootnode)
{
    if (rootnode != NULL)
    {
        freeAVLTree(rootnode->leftchild);
        freeAVLTree(rootnode->rightchild);
        free(rootnode);
    }
}


int main(void)
{
    struct node *rootnode = NULL;
    int choice;
    char description[100];
    int priority;

    do
    {
        printf("\n1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Print Task Tree\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter task description: ");
            scanf(" %[^\n]s", description);
            printf("Enter priority (1 to 5, where 1 is the least priority and 5 is the highest priority): ");
            scanf("%d", &priority);
            rootnode = insertTask(rootnode, priority, description);
            printf("Task added successfully!\n");
            break;
                 // Function to print the tree in-order based on priority
        case 2:
            printf("\n--- Tasks ---\n");
            printInOrder(rootnode);
            break;

        case 3:
            printf("Enter the priority to delete: ");
            scanf("%d", &priority);
            rootnode = deleteNode(rootnode, priority);
            printf("Task deleted successfully!\n");
            break;

        case 4:
            printf("\n--- Task Tree ---\n");
            if (rootnode != NULL)
            {
                printAsTree(rootnode, 0);
            }
            else
            {
                printf("No tasks available.\n");
            }
            break;

        case 5:
            // Free the memory before exiting
            freeAVLTree(rootnode);
            printf("Exiting the program. Memory freed.\n");
            break;

        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}
