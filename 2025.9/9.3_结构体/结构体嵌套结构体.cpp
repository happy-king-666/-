#include<stdio.h>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
struct teach {
	string name;
	int age; 
	struct Student t2;//struct,即它的类型 
};

main(){
	teach t1;
	t1.name="张三";
	t1.age=67;
	t1.t2.name="赵彪";
	t1.t2.age=23;
	t1.t2.score=85;
	
	printf("%s,%d,\n%s,%d,%d",t1.name.c_str(),t1.age,t1.t2.name.c_str(),t1.t2.age,t1.t2.score); 
	
	} 
	
	

