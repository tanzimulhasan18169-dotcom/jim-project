#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char input[100];
    int i = 0, flag = 1;

    fp = fopen("input.txt", "r");

    if(fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    fscanf(fp, "%s", input);

    while(input[i] != '\0')
    {
        if(!isdigit(input[i]))
        {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("Numeric Constant\n this is another change ");
    else
        printf("Not Numeric\n");

    fclose(fp);
    return 0;
}
