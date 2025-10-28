//利用指针访问数组中的元素 (未完成)
#include<stdio.h>
main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
	printf("第一个元素为%d\n",arr[0]);//常规打印输出 利用数组 
	int *p =arr;//定义指针/注：定义时*p=arr 而arr[值]为某个元素,会导致指针*p的定义失败 
	printf("第一个元素为%d\n",*p);//指针打印输出 
	*p++;// 让指针向后偏移四个字节,使其地址能够指向下一位输出 
	printf("第二个元素为%d\n",*p); 
	for(int i=0;i<10;i++) //for函数的常规数组循环打印 
	{
		printf("1.arr[%d]=%d\n",i,arr[i]); 
	}
	int *m=arr;
	for (int o=0;o<10;o++)//问题-指针层次的混乱,在运行过程中无法成功打印输出 
	{
	printf("arr[%d]=%d\n",o,*m);
	*m++;//先打印再增加指数的地址 
	}
	return 0;
	 } 
