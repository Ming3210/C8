#include<stdio.h>
int main()
{
	int n,m,i,j,sum,k;
	int nums[k];
	printf("Nhap so phan tu numbers:");
	scanf("%d",&n);
	int numbers[n];
    for ( i = 0; i <n; i++){
      printf("numbers[%d]=",i);
      scanf("%d", &numbers[i]);
  	}
  	int number,index;
  	printf("Nhap phan tu them:");
  	scanf("%d",&number);
  	printf("Nhap thu tu muon them");
  	scanf("%d",&index);
  	if(index <= 0){
  		index=0;
	  }
	if(index >=n){
		index = n;
	}
	for(int j=n;j>index;j--){
		numbers[j]=numbers[j-1];
	}
	numbers[index]=number;
	n++;
	  printf("Gia tri cac phan tu trong mang:\n");
    for (int k= 0; k < n; k++){ 
      printf("%d\n", numbers[k]);
    }
}