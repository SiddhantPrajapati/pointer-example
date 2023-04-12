//WAP to print address of variable using pointer,
#include<stdio.h>
void main()
{
    int a,*p;
    p=&a;
    printf("enter a:");
    scanf("%d",&a);
    printf("address of %d is %p",a,*p);
}
