#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n;
    printf("enter length of an array\n");
    scanf("%d",&n);

    printf("enter elements which you want to insert\n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("Traversing of an array\n");
      for(i=0;i<n;i++)
      {
        printf("A[%d]:%d\n",i,a[i]);
      }
      getch();
    }