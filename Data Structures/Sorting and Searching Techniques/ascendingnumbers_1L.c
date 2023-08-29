#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("ascendingnumbers_1L.txt", "w");
    if (fp == NULL)
    {
        printf("Error in opening file\n");
        return 1;
    }

    for (int i = 0; i <= 100000; i++)
    {
        fprintf(fp, "%d\n", i); // Add a space after each number
    }

    fclose(fp);
    return 0;
}
