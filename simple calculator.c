#include<stdio.h>
#include<math.h>

int add(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);
int power(int,int);
                       
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
	int a,b,result;
	char d;
	printf("\nEnter the input no: ");
	scanf("%d",&a);
	printf("press any one operation from the following: '+', '-', '*', '/', '^': ");
	scanf("%c",&d);
	result=a;
	while(d!= '=')
	{
		printf("\nEnter the next no: ");
		scanf("%d",&b);
		switch(d)
		{
			case '+': 
			{
				result=add(result,b);
			
			}
			case '-':
			{
				result=sub(result,b);
				
			}
			
			case '*':
			{
				result=mult(result,b);
			
			}
		}
		
		printf("press any one operation from the following: '+', '-', '*', '/', '^', '=': ");
		scanf("%c",&d);
		
	}
	printf("\nThe result= %d",result);
	return 0;
}