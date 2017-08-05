#include <stdio.h>

int C(int n, int k)
{
	int r;

	while(k == 1)
	{
		return n;
	}

	while(k == 0)
	{
		return 1;
	}

	while(k == n)
	{
		return 1;
	}

	while(n > 1)
	{
		return (C(n-1, k) + C(n-1, k-1));
	}
}


int main(void)
{
	int n, k;
	scanf("%d", &n);
	k = n;

	int x;
	while (k > 0)
	{
		x = C(n, k);
		printf("%10d", x);
		k--;
	}

	printf("%10d", 1);

}
