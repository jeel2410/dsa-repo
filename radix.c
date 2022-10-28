#include<stdio.h>
#define size 20
void main()
{
  int a[size],i,j,n,tmp;
  clrscr();
  printf("enter the number of element");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("enter elements %d",i+1);
     scanf("%d",&a[i]);
  }
  printf("insorted list is \n");
  for(i=0;i<n;i++)
      printf("%d\t",a[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
       if(a[j]>a[j+1])
       {
	 tmp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=tmp;
	}
     }
  }
  printf("\nsorted list is:\n");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  getch();
 }
