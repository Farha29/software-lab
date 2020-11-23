#include<stdio.h>

int main()
{
    int n;

    printf(" Any Number: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("\n negative number.\n");
    }
    else if(n>=0)
    {
        printf("\nTpositive number.\n");
    }

    return 0;
}
