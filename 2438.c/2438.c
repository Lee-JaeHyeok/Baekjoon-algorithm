#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int j = 1; j <= N ; j++)
	{
		for (int i = 1; i <= j; i++)
			printf("*");
		printf("\n");

	}
}