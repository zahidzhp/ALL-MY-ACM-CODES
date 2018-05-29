#include <stdio.h>

int find(int n)
{
	int m;
	int t;

	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		m = find(n - 1);
		t = find(n - 2);
		m += (2 * t) + 1;
		return m;
	}
}

int main()
{
	int cas, n;

	scanf("%d",&cas);
	while (cas--)
	{
		scanf("%d",&n);
		printf("%d\n",find(n));
	}
}
