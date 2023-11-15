#include<stdio.h>
int main() {
	int n,i,updateValue,updateIndex;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	printf("nhap so can thay va vi tri thay");
	 scanf("%d%d",&updateValue, &updateIndex);
	a[updateIndex-1] = updateValue;
	for (i=0;i<n;i++){
	printf("%d ", a[i]);}
}