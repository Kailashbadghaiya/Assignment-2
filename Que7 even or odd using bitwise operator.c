#include<stdio.h>
#include<conio.h>
int main()
{
    int x;

    printf("Enter a number :\n");
    scanf("%d",&x);

    (x&1) ?  printf("odd") : printf("even");
    return 0;
}
