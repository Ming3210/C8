#include<stdio.h>
int main() {
	int n,i,deleteIndex;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	printf("nhap vi tri xoa");
	 scanf("%d",&deleteIndex);
	for (i=deleteIndex-1;i<n-1;i++){
	a[i] = a[i+1];}
	for (i=0;i<n-1;i++){
	printf("%d " ,a[i]);}
}