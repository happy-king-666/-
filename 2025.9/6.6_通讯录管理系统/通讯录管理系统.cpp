//添删改查显示清空退出联系人  注意指针中的传输格式 易报错易出现逻辑程序问题 
#include<stdio.h>
#include<string>
#include<iostream>//cin 关键字 
#define Max 1000//用作c++中使用Max时的预处理 
using namespace std;//cin 使用的储存空间 
//添加联系人结构体 
struct person {
	string name;
	int sex;//性别男1女2
	int age;
	string phone; 
	string  addr;
} ;
//通讯录结构体 
struct addr {
	struct person personarr [Max];
	int size;
};
//菜单页面 
void showmenu (){
	printf("\t*1.添加联系人\n");
	printf("\t*2.显示联系人\n");
	printf("\t*3.删除联系人\n");
	printf("\t*4.查找联系人\n");
	printf("\t*5.修改联系人\n");
	printf("\t*6.清空联系人\n");
	printf("\t*0.退出通讯录\n"); 
}
//添加页面
void addperson (addr *abs){
	if(abs->size>=Max){
		printf("数据已满"); 
		return ;
	}else{
	struct person geren;
	printf("请输入姓名\n");
	string name;
	cin>>abs->personarr[abs->size].name; //存入出现问题,无法存进数组中,修改过后直接传入数组其中[]中的是第几位数组 
	printf("请输入性别,1男,0女\n");
		while (true){
		int sex; 
		cin >>abs->personarr[abs->size].age; //scnf不能读取字符串只能读取 
		if(sex==1){
		printf("男性\n");
		break;	} 
			else if(sex==0){
				printf("女性"); 
				break;}
		else printf("输入错误请重新输入\n"); 
	}
	int age;
	printf("请输入年龄\n");
	cin>>abs->personarr[abs->size].age;
	string phone; 
	printf("请输入电话\n");
	cin>>abs->personarr[abs->size].phone;
	string  addr;
	printf("请输入住址\n");
	cin>>abs->personarr[abs->size].addr;
//	abs->size =abs->size++;
	abs->size++; //出现错误,指针格式问题 
	printf("添加成功\n");
	//system("pause");//按任意键继续
	system("cls"); //清空页面 
	}} 
void showperson (addr*abs) {
	if(abs->size==0){
		printf("人数为空\n");
	}
	else{
		for (int i=0;i<abs->size;i++){//在指针函数内部访问时 
		printf("姓名:%s\t",abs->personarr[i].name.c_str());
		printf("性别:%s\t",abs->personarr[i].name.c_str());
		printf("年龄:%d\t",abs->personarr[i].age);
		printf("电话:%s\t",abs->personarr[i].phone.c_str());
		printf("住址:%s\t",abs->personarr[i].addr.c_str());
		printf("\n");
		}
	}
	system("pause");//pause 按任意键继续
	system("cls"); //cls 清屏 
}
//判断人名是否存在
int isexist(addr *abs,string name) {
	for(int i=0; i<abs->size;i++){
		if(abs->personarr[i].name.c_str()==name){
		return i;	
		}
	}
}
void delet (addr *abs)
{	
	printf("请输入您要删除的联系人\n");
	string name ;
	cin>>name;
	int ret =isexist (abs,name) ;
	
}
//查找删除指定联系人
void aeletperson (addr *abs){
	string name;
	scanf("%s",&name);
	int ret= isexist (abs,name);
	if(ret!=-1){
		for (int i =ret;i<abs->size;i++){
		abs->personarr[i]=abs->personarr[i+1];	
		}	abs->size--;
	}else{printf("查无此人");
	}
} 
main(){
	struct addr abs;//创建通讯录结构体变量 
	abs.size=0;//初始通讯录结构体人数 
	while (true){//循环 
	showmenu ();//菜单 
	int select;	//创建用户选择输入变量
	cin>> select;
		switch (select){//循环框架 
		case 1: //添加联系人
			addperson (&abs);
			break;
		case 2://显示联系人
		showperson(&abs);
			break;	
		case 3://删除联系人
	{
		printf("输入删除人名\n");
		string name;
		scanf("%s",name.c_str());
		if( isexist(&abs,name)	==-1)
		{printf("查无此人\n");
		}else{//删除语句 
		}	}
			break;
		case 4://查找联系人
		aeletperson (&abs);
			break;		
		case 5://修改联系人
			break;
		case 6://清空联系人
			break;		
		case 0://退出通讯录
//		return 0;
		 	printf("欢迎下次使用");
	system ("pause"); 
			break;	
};};			
	showmenu ();
	system ("pause"); //pause 作用是运行到此处停下,方便查看运行过程 
	return 0 ; 
} 
