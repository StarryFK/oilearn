#include <cstdio>
#include <cstring>
#define MAXN 99

int a[MAXN][MAXN];

int main()
{
	memset(a, 0, sizeof(a));
	int n, now, x, y;
	scanf("%d", &n);
	a[x=0][y=n-1] = now = 1;
	while( now < n*n)
	{
		while(x+1<n && !a[x+1][y]) a[++x][y] = ++now;
		while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++now;
		while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++now;
		while(y+1<n && !a[x][y+1]) a[x][++y] = ++now;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
