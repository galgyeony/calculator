#include <stdio.h>

int add(int,int);
int sub(int,int);
int div(int,int);
int multi(int,int);

int main(int argc, char* argv[])
{
	int a,b,c ;
	char operator;

	printf("please enter an exp: ");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch(operator)
	{
		case '+':
			c=add(a,b);
			break;
		case '-':
			c=sub(a,b);
			break;
		case '*':
			c=multi(a,b);
			break;
	}

}
