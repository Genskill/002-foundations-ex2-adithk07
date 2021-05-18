#include<stdio.h>
int main()
{
	float a, b, c;
	printf("\nside 1 ");
	scanf("%f", &a);
	printf("\nside 2 ");
	scanf("%f", &b);
	printf("\nside 3 ");
	scanf("%f", &c);
	if(((a*a) + (b*b)) == (c*c))
		printf("Yes");
	else if(((b*b) + (c*c)) == (a*a))
		printf("Yes");
	else if(((a*a) + (c*c)) == (b*b))
		printf("Yes");
	else
		printf("No");
	return 0;
}
