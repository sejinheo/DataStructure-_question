#include <stdio.h>
int main()
{
	int arr[301][301];
	int n,m,k;
	scanf("%d %d",&n, &m);

	for(int i=0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	scanf("%d",&k);
	int sum[10000] = {0};
	for(int m =0;m<k;m++)
	{
		int i,j,x,y;
		scanf("%d %d %d %d",&i,&j,&x,&y);
		
		i--; j--; x--; y--;
		for(int row = i;row <=x;row++)
		{
			for(int col = j;col<=y;col++)
			{
				sum[m] +=arr[row][col];
			}
		}
	}
	for(int i =0;i<k;i++)
		printf("%d\n",sum[i]);
	return 0;
}
