#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	printf("\nside 1 ");
	scanf("%f", &a);
	printf("\nside 2 ");
	scanf("%f", &b);
	printf("\nside 3 ");
	scanf("%f", &c);
	if((pow(a, 2) + pow(b, 2)) == pow(c, 2))
		printf("Yes");
	else if((pow(b, 2) + pow(c, 2)) == pow(a, 2))
		printf("Yes");
	else if((pow(a, 2) + pow(c, 2)) == pow(b, 2))
		printf("Yes");
	else
		printf("No");
	return 0;
}
