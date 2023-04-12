//WAP for sorting using a pointer.
#include<stdio.h>
void main()
{
    int i,j,a[5],temp,*p;
    p=&a[0];
    for(i=0;i<5;i++)
    {
       printf("enter array of %d element:",i+1);
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*(p+i)<*(p+j))
            {
             temp=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=temp;
            }
        }
    }
    printf("after sorting:");
    for(i=0;i<5;i++)
    {
        printf("%d \t",*(p+i));
    }
}
