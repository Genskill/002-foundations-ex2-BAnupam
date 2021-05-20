#include <stdio.h>
#include <cs50.h>

int main(void) {
	float a = get_float("side 1 ");
	float b = get_float("side 2 ");
	float c = get_float("side 3 ");
	if(a > b && a > c)
	{
		if((b*b)+(c*c) == (a*a))
			printf("Yes");
		else
			printf("No");
	}
	else if(b > a && b > c)
	{
		if((a*a)+(c*c) == (b*b))
			printf("Yes");
		else
			printf("No");
	}
	else
	{
		if((a*a)+(b*b) == (c*c))
			printf("Yes");
		else
			printf("No");
	}
	printf("\n");
}
