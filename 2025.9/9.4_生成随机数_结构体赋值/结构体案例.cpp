#include<stdio.h>//过后重练 
#include<string>//打印字符头文件 
#include<cstdlib>//新增头文件用于rand函数 rand 函数用于生成伪随机数  缺陷是在编译生成后重新编译生成无法改变变量 
//rand 函数原型 int rand （void)
//本函数中使用的场景是生成指定范围内的随机数，本函数使用方法是int 名= min + rand () % ( max - min + 1); 
#include<ctime>//新增头文件用于time函数 time 可用于获取本地时间,在本函数在是用于生成随机数 
using namespace std;//学生结构体 
struct student {
	string name;
	int age; 
	int score ;
}; 
struct teach {//老师结构体 
	string name;
	struct student sarr[5];
	};
void allocatespace(struct teach tarr[],int len,int srand){//给结构体赋值 
	for(int i=0;i<len;i++){
	string nameseed="ABCDE";//定义变量做分类 
	tarr[i].name="teach_" ;
	tarr[i].name+=nameseed[i];//利用变量在给名字做分类 
	for(int j=0;j<5;j++){
	tarr[i].sarr[j].name="student_";
	tarr[i].sarr[j].name+=nameseed[i];
	tarr[i].sarr[j].age=60;	
	//	int random = rand ()%40+50;//在C++中取随机数,需要有头文件 有缺陷
	tarr[i].sarr[j].score=srand;
	} 	} 
} 
void printfall( struct teach tarr[],int len) {//打印输出所有结构体 
	for (int i=0;i<len;i++){
		for(int j=0;j<5;j++){
			printf("老师\t%s,\n",tarr[i].name.c_str());
			printf("\t学生%s,%d,%d\n",tarr[i].sarr[j].name.c_str(),tarr[i].sarr[j].age,tarr[i].sarr[j].score);
		}
	}	
}
main(){
	//随机数种子利用系统中的时间生成随机数，需要头文件 
	srand((unsigned int)time(NULL)) ;//随机生成变量但是,在后续使用报错,变量名切换为rand后取消报错 
	struct teach tarr[3];
	int len =sizeof(tarr)/sizeof(tarr[0]);//确定数组长度 
	allocatespace ( tarr, len,rand());//  	有疑问—哪里来的rand（）使用	//引用变量时不需要前置的结构体函数，也不需要数组具体位置如arr[] 
	printfall(tarr,len);
	} 
