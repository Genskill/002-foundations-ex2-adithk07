#include<stdio.h>
void pattern1(int n)
{
	int i, j;
	for(i = 0 ; i < n ; ++i)
	{
		for(j = n ; j > i ; --j)
			printf("#");
		printf("\n");
	}
}
void pattern2(int n)
{
	int i, j;
	for(i = 0 ; i < n ; ++i)
	{
		for(j = 0 ; j < n ; ++j)
			if(i + j >= (n - 1))
				printf("#");
			else
				printf(" ");
		printf("\n");
	}
}
int main(void)
{
	int c, n;
	scanf("%d", &c);
	scanf("%d", &n);
	switch(c)
	{
		case 1: 
			pattern1(n);
			break;
		case 2:
			pattern2(n);
			break;
	}
	return 0;
}
