#include<stdio.h>
int main()
{
	int n,m,i,j,sum;
	printf("Nhap so phan tu numbers:");
	scanf("%d",&n);
	int numbers[n];
    for ( i = 0; i <n; i++){
      printf("numbers[%d]=",i);
      scanf("%d", &numbers[i]);
  	}
  	printf("Nhap so phan tu findNumber:");
  	scanf("%d",&m);
  	int findNumbers[m];
  	for ( i = 0; i <m; i++){
      printf("findNumbers[%d]=",i);
      scanf("%d", &findNumbers[i]);
  	}
  	for (i = 0; i <n; i++){
//  		printf("%d\n",numbers[i]);
  		for(j=0;j<m;j++){
//  			printf("%d\n",findNumbers[j]);
			if(findNumbers[j] == numbers[i]){
				printf("Gia tri findNumber:%d\n",findNumbers[j]);
				sum+=findNumbers[j];
			}
		}
	}
	printf("Tong:%d",sum);
}