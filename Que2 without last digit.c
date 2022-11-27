#include<stdio.h>
#include<conio.h>
int main()
{
    int x;

    printf("Enter a number\n");
    scanf("%d",&x);
    {
        printf("without last digit of %d",x/10);
    }
    return 0;
}
