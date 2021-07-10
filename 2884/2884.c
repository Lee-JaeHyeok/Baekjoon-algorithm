#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		M = M - 45;
	}
	else
	{
		if (H == 0)
		{
			H = 23;
			M = 60 - (45 - M);
		}
		else
		{
			H = H - 1;
			M = 60 - (45 - M);
		}
	}
	printf("%d %d", H, M);
	return 0;
}