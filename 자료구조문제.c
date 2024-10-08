#include<stdio.h>
int arr[201][201]={0};
int main(){
	int i, j, k, n, m, num=1;
	scanf("%d %d",&n, &m);
	k=2;//k= i+j의 값
  
	//배열의 인덱스 위치에 값을 저장 코드 작성
	for(k = 0;k <n+m;k++)
	{
		for(j = 0;j<m;j++)
		{
			for(i = 0;i<n;i++)
			{
			if(k == i + j)
				arr[i][j] = num++;
			}
		}
	}
	
	// 배열의 결과를 출력
for(i = 0;i<n;i++,puts(""))
{
	for(int j = 0;j<m;j++)
	{
		printf("%d ",arr[i][j]);
	}
	
}
	return 0;
}
