#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int sort(int *p)
{
	int ch;
	printf("\nchoose the order of sorting:-\n1.\tASCENDING ORDER .\n2.\tDECENDING ORDER .\n");
	printf("enter your choice:\t");
	scanf("%d",&ch);
	printf("\n");
	switch(ch)
	{
		case 1: {
			       int i,t,j,n;
				   for(i=0;i<n;i++)
				   {
					for(j=i+1;j<n;j++)
					{
						if(*p>*(p+i))
						t=*(p+i);
						*(p+i)=*p;
						*p=t;
					}
				   }  
				   for(i=0;i<n;i++)
				  {
						 printf("%d ",p);
				  }
			    }  break;
		case 2: {
			        int i,t,j,n;
				   for(i=0;i<n;i++)
				   {
					for(j=i+1;j<n;j++)
					{
						if(*p<*(p+i))
						t=*(p+i);
						*(p+i)=*p;
						*p=t;
					}
				   }  
				   for(i=0;i<n;i++)
				  {
						 printf("%d ",p);
				  }
			    }  break;
			    }
}
int main()
{
  int a[20],i,j,n;
  int *p;
  printf("enter the value how much number of elements you entered:\t");
  scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
  printf("enter the elements:\t");
  for(i=0;i<n;i++)
 {
    	scanf("%d",&a[i]);
 }
  p=&a[0];
  sort(p);
  getch();
  return(0);
}
