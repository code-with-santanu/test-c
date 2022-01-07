#include<stdio.h>
#include<math.h>

int add(int);
int sub(int);
int mult(int);
int div(int);
int power(int);
                       
int add(int a,int b)
{                   
	b = a+b;
	return b;
}

int sub(int a,int b)
{
	b=(a-b);
	return b;
}

int mult(int a,int b)
{
	b=a*b;
	return b;
}

int div(int a,int b)
{
	b=a/b;
	return b;
}

int power(int a,int b)
{
	int i=1;
	while(i<b)
	{
		b=a+a;
		i++;
	}
	return b;
}


int main()
{
	int a,b,choice;
	printf("\nEnter the input nos: ");
	scanf("%d\t%d",&a,&b);
	printf("press any one operation from the following: '+', '-', '*', '/', '^'");
	scanf("%c",&d);
	
	//To sum
	if(d == '+')
	{
		result=add(a,b);
		printf("\nDo you want to add more no?\nPress 1 for YES\nPress 2 for NO");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("\nEnter new no: ");
			scanf("%d",&a);
			
		}
		
		else if(choice==0)
		{
			printf("\nTotal= %d",result);
		}
		continue;
	}
	//To substract
	if(d=='-')
	{
		result=sub(a,b);
		printf("\nDo you want to subtract more no?\nPress 1 for YES\nPress 2 for NO");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("\nEnter new no: ");
			scanf("%d",&a);
		}
		else if(choice==0)
		{
			printf("\nTotal= %d",result);
		}
		continue;
	}
	//To multiply
	if(d=='*')
	{
		result=mult(a,b);
		printf("\nDo you want to multiply more no?\nPress 1 for YES\nPress 2 for NO");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("\nEnter new no: ");
			scanf("%d",&a);
		}
		else if(choice==0)
		{
			printf("\nTotal= %d",result);
		}
		continue;
	}
	
	
	return 0;
	
}
