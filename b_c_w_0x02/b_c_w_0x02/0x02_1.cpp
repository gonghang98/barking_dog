// smaller than x
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	int x = 0, n = 0;
	scanf(" %d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < x)
			printf("%d ", a);
	}

	return 0;
}