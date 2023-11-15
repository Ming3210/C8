#include<stdio.h>
int main()
{ 
    int a[50][50];
    int row,col,sum;
    printf("nhap so hang ="); scanf("%d",&row);
    printf("nhap so cot ="); scanf("%d",&col);
    printf("nhap vao ma tran:\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap co so chan la la:\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
        	if(a[i][j]%2==0){
            printf("%d\n",a[i][j]);
            sum +=a[i][j];
			}
        }
    }
     printf("Tong cac so chan:%d\n",sum);
}