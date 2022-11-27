#include<stdio.h>
#include<conio.h>
int main()
{
    int x;

    printf("Enter a number :\n");
    scanf("%d",&x);

    x=(x%10)*100+(x/10);
    {
        printf("after right rotation of %d",x);
    }
    return 0;
}
