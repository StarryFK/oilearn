#include <cstdio>
#include <cstring>
#define MAXN 99

int a[MAXN][MAXN];
memset(a, 0, sizeof(a));

int main()
{
	int n, x=0, y=0;
	scanf("%d", &n);
	a[0][n-1] = int now = 1;
	while( now <= n*n)
	{
		while(y+1<n && !a[x][y+1]) a[x][++y] = now++;
		while(
