//设计结构体,并按照年龄进行冒泡排序 
#include<stdio.h>
#include<string>
#include<ctime> 
using namespace std;
//定义结构体 
struct  hero {
	string name;
	int age;
	string sex;
};
//冒泡排序数组 按照年龄升序排列 两个for函数循环加if语句判断大小最后交换函数 
void bubbleshort ( hero harr[],int len){
//	int i,j;
	for(int i=0;i<len-1;i++){
		for (int j=0;j<len-i-1;j++ ){
			if (harr[j].age>harr[j+1].age){
				hero temp =harr[j];
				harr[j]=harr[j+1];
				harr[j+1]=temp;
			} 
		}
	}
} 
void printfall(hero harr[],int len){
	for(int i=0;i<5;i++){
		printf("姓名:%s,年龄:%d,性别:%s\n",harr[i].name.c_str(),harr[i].age,harr[i].sex.c_str());
	}
} 
main(){
	struct hero harr [5] {
		{"张飞",21,"男"},
		{"赵云",20,"男"},
		{"貂蝉",18,"女"}, 
		{"关羽",23,"男"}, 
		{"刘备",22,"男"},
	};
	int len = sizeof (harr) / sizeof(harr[0]);
	for(int i=0;i<5;i++){
		printf("姓名:%s,年龄:%d,性别:%s\n",harr[i].name.c_str(),harr[i].age,harr[i].sex.c_str());
	}
	bubbleshort ( harr, len);
	printf("\n");
	printfall(harr,len);
} 
