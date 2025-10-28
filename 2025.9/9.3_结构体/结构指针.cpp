//结构指针 利用操作符->可以通过结构体指针访问结构体属性 
#include<stdio.h> 
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
main(){
	struct Student arr[2]= {
	{"张三",25,84},
	{"刘六",18,92}
	};
	Student *p= &arr[0];
  //Student *p=arr;//也可完成该任务 利用了指针的退化特性默认指向数组的首元素 
	for(int i=0;i<2;i++){
		printf("姓名：%s,年龄：%d分数：%d\n",arr[i].name.c_str(),arr[i].age,arr[i].score); 
	}
		struct Student stu= {"无名",15,74};
	Student *l= &stu;
		printf("姓名：%s,年龄：%d分数：%d\n",l->name.c_str(),l->age,l->score); 
	}
	

