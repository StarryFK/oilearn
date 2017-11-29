//Light Problem
#include <cstdio>
#include <cstring>
#define MAXN 99999
int a[MAXN];
int main()
{
	memset(a, 0, sizeof(a));
	int k, n; 
	/*
	   k is the number of the peolpe
	   n is the number of the lights
	   */
	scanf("%d %d", &n, &k);
	for(int i=1; i<=k; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j%i == 0)
			{
				a[j-1] = !a[j-1];
			}
		}
	} // open and close the lights
	for(int u = 1; u <= n; u++)
	{
		printf("%d ", a[u-1]);
	}
	printf("\n");
	return 0;
}
// just a test file
