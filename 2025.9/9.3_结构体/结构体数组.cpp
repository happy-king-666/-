//struct 结构体名称 数组名[元素个数] ={{},{},...{}}
#include<stdio.h>
#include <string>
using namespace std;
//定义结构体
struct  Student{
	string name;
	 int age;
	 int score;
}; 
main(){
	struct Student stuarr[3] = {//p批量像结构体中填充数据 注:在内部的链接不同数据间用,链接 
		{"张三",18,98},
		{"李四",23,90},
		{"王五",32,87}
	};
	//修改或填充数据格式 
	stuarr[2].name="赵彪"; 
	stuarr[2].age=99;
	stuarr[2].score=60; 
	//for循环打印排列出数组 
	for(int i=0;i<3;i++){
		printf("%s,%d,%d\n",stuarr[i].name.c_str(),stuarr[i].age,stuarr[i].score);//字符串定位时要加.c_str()进行访问 
	};
} 
