#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the no to check the following condition:\t");
	scanf("%d",&n);
	printf("1.\tfactorial of the no ...\n2.\tprime or not...\n3.\todd or even...\n4.\tEXIT...\n");
	printf("choose one of the following...");
	scanf("%d",&i);
	switch(n)
	{
		case 1:   int facto,j;
		          for(j=n;j>0;j--)
		          {
						facto=facto*n;
				  }
				  printf("factorial of the given no. is:\t%d",facto);
				  break;
	    case 2:   int b,c=0;
	              for(b=1;b<n;b++)
	              {
						if(n%b==0)
						c++;
				  }
				  if(c==1)
				  printf("\nno. is prilme no.\n");
				  else 
				  printf("not a prime no.\n");
				  break;
		case 3:   int n;
			      if(n%2==0)
		          printf("no. is even\n");
		          else
		          printf("no. is odd \n");
		          break;
	   case 4:    default;
	              printf("EXIT\t");
	}
}
