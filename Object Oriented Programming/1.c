//There are two methods to determine time complexity of a program
//1. By calculating the number of times the statement is executed
//
//STEP COUNT 
//1. Count the number of steps in the program
//2. Count the number of times each step is executed
//3. Add the number of times each step is executed

//void bubblesort()
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) //n-1
    {
        for (j = 0; j < n - 1 - i; j++) //n-1-i
        {
            if (a[j] > a[j + 1]) //n-1-i
            {
                temp = a[j]; //n-1-i
                a[j] = a[j + 1]; //n-1-i
                a[j + 1] = temp; //n-1-i
            }
        }
    }
}

//operations count is calculated as
//n-1 + n-1-i + n-1-i + n-1-i + n-1-i
