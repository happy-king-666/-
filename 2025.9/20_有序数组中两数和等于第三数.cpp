//两数之和等于目标 
#include<stdio.h>
#include<iostream>
using namespace std;
//插入排序 
void crpx (int arr[],int len ){
	for (int i=1;i<len;i++){
		if(arr[i]<arr[i-1]){
			int temp;
			temp=arr[i];
			int j; 
			for(j=i-1;arr[j]>temp ;j--){
				arr[j+1]=arr[j];
			}arr[j+1]=temp;
		}
	}
} 
//void  insert_sort(int arr[],int len) {
//	int temp;
//	for( int i=1;i<len;i++){
//		if(arr[i]<arr[i-1]){
//			temp= arr[i];
//			int j;
//			for(j=i-1;arr[j]>temp;j--){
//				arr[j+1]=arr[j];	//其中[j+1]=[i]在数组的序列上是			
//			} arr[j+1]=temp;		//此处[j+1]是插入到比temp小的数前方 
//		}
//	}
//}
//两数之和 
void bj(int arr[],int len,int terget){
//	for (int i=0;i<len;i++){
	int left =0 ;
	int right =len-1; 
	while (left<right){
		int sum=arr[left]+arr[right];
 		if(sum==terget){
			printf("%d+%d=%d\n",arr[left],arr[right],terget);
//			break;		只能找到一种情况			
            left++;
            right--;            // 找到一组后，同时移动左右指针，继续寻找其他可能的组合
		}else if(sum>terget){
			right--;	
		}else if(sum<terget){
			left++;
		}
	}
} 
void dy (int arr[]){
	for (int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}printf("\n");
} 
main(){
	int arr[] ={2,8,6,4,7,88,0,9,11,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	dy (arr);
	crpx (arr,len);
	int terget ;
	dy (arr);
	cin>>terget ;
	bj(arr,len,terget);
} 
