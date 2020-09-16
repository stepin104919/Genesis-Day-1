#include <stdio.h>
#include <stdlib.h>
#include "divisible.h"

int main()
{
    int num1,num2,flag;
    printf("Enter dividend:\n");
    scanf("%d",&num1);
    printf("Enter divisor:\n");
    scanf("%d",&num2);
    flag=divisible(num1,num2);
    switch(flag)
    {
    case -1:
        printf("Division by zero not possible\n");
        break;
    case 0:
        printf("Not perfectly divisible\n");
        break;
    default:
        printf("Perfectly divisible\n");
    }
    return 0;
}
