//结构体定义与使用 使用有些类似数据库的使用 
// 问题:关于字符串打印方面不太理解 
#include<stdio.h>//<stdio.h>中包不含着str0ing字符串类型 
#include<string> 
using namespace std; //struct 结构体名称 数组名[元素个数] ={{},{},...{}},创建结构体变量时关键字可省略,在结构体变量利用.来访问成员 
	struct Student {//结构体定义需要在函数外部 
		string name;
		int age;
		int score;
	}s3 ;//使用方法3 在结构体创建完成后直接创建结构，在后续使用填充;用此方法极少 
main(){
	//使用方法1 使用该结构体并按照结构逐一向内填充 
	struct Student s1;
	s1.name="张三";
	s1.age=21;
	s1.score=99;
	printf("name=%s,age=%d,score=%d\n",s1.name.c_str(),s1.age,s1.score);
	//使用方法2 使用结构体并按照结构顺序向内填充 
	struct Student s2={"李四",16,85};
	printf("name=%s,age=%d,score=%d\n",s2.name.c_str(),s2.age,s2.score);
	//使用方法3 后续 
	s3.name="赵彪";
	s3.age=28;
	s3.score=89;
	printf("name=%s,age=%d,score=%d\n",s3.name.c_str(),s3.age,s3.score);
	
};
	
	

