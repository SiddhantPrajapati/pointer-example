//sum of array using pointer
#include<stdio.h>
void main()
{
    int *p,a[5],sum=0,i;
    for(i=0;i<5;i++)
    {
        p=&a;
        printf("enter %d element of array:",i+1);
        scanf("%d",&*(p+i));
    }
    for(i=0;i<5;i++)
    {
        sum=sum+*(p+i);
    }
    printf("total sum:%d",sum);
}
