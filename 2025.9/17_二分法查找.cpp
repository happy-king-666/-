//要求是有序数组 
#include<stdio.h>
#include<iostream>
using namespace std;
void zb (int arr[],int len,int md){
	int left=0;
	int right=len-1;
//	int middle=left+right;
	while(left<=right){
		int middle=left + (right - left) / 2;
		if(arr[middle]==md){
			printf("数组中含有此值%d在%d位",md,middle); 
			return ;
		}else if(arr[middle]>=md){
			right=middle-1;
		//	printf("数组中含有此值%d在%d位",md,middle); 
			
		}else if(arr[middle]<md){
		//	printf("数组中含有此值%d在%d位",md,middle); 

			left=middle+1;
		}
		
	}printf("数组中无此值");
}
main(){
	
	int arr[8]={1,4,6,8,9,11,22,33};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("请输入查询值") ;
	int md;
	cin>>md;
	zb(arr,len,md);
	 return 0;
} 
