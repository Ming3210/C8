#include<stdio.h>
int main(){
	int max,min;
	int nums[3];
	for(int i=0;i<3;i+=1){
		printf("number[%d]",i);
		scanf("%d",&nums[i]);
	}
	if(nums[1]>nums[2] && nums[1]>nums[3]){
					max=nums[1];
				}else if(nums[2]>nums[3] && nums[2]>nums[1]){
					max=nums[2];
				}else{
					max=nums[3];
				}
				if(nums[1]<nums[2] && nums[1]<nums[3]){
					min=nums[1];
				}else if(nums[2]<nums[1] && nums[2]<nums[3]){
					min=nums[2];
				}else{
					min=nums[3];
}
printf("min:%d\n",min);
printf("max:%d",max);
}
