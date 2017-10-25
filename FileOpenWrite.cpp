#include <cstdio>
#include <cstring>

#define MAXN 99
#define LOCAL

int a[MAXN];

int main()
{
	memset(a, 0, sizeof(a));
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i;
	while(scanf("%d", a[i]) == 1)
	{
		i++;
	}
	
