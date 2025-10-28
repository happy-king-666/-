#include<stdio.h>
//冒泡排序
void sort (int arr[],int len) {//
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-i-1;j++){
				if(arr[j]>arr[j+1])
			{int temp;
			temp=arr[j];
			arr[j]=arr[j+1];	
			arr[j+1]=temp;
			}	
		}
	}
}
main(){
	//列出数组 
	int arr[12]={9,66,4,0,42,88,22,35,45,28,75,11};
	//计算数组长度
	int len=sizeof(arr)/sizeof(arr[0]); //新出现关键词_sizeof,作用是用于计算数组的长度 
	//打印输出前的排序 
	//for语句格式for(初始化表达条件;条件表达式;更新表达式) 
	for(int i=0;i<len;i++){//for函数循环打印arr数组 
	printf("%d,",arr[i]);}
	printf("\n");//换行 
	sort(arr,len);//调用上方定义的函数 在引用时不需要标注类型 
	for(int i=0;i<len;i++){
	printf("%d,",arr[i]);
	 }
} 

