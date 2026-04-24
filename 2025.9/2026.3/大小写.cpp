#include <stdio.h>
#include <string>
#include <string.h>
void fun1(char *s){
	int i;
	for(i=0;s[i]!='\0';i++){
		if(s[i]>'a'&&s[i]<'z')
		s[i]-=32; 
		
	}
} 

void fun(char *s){
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]-=32;
	}
}



int fun2(int n){
	
	int y=0;
	while(n!=0){
		y=y*10+n%10;
		n=n/10;
	}
	return y;
}


void fun3(char *s){
		char *p;
		
		p =s+  strlen(s) - 1;
		while (*p==' ')
		p--;
		*(p+1) ='\0';
	
} 





int main()
{
    char str[100] = "abc123XYZ";
    fun(str);
    printf("×Ö·û´®×ª´óÐ´£º%s\n", str);
   char str11[100] = "hello   ";
    fun3(str11);
    printf("%s\n", str11);
    
    int num = 12345;
    int res = fun2(num);
    printf("Êý×ÖÄæÐò£º%d\n", res);
    getchar();
    
    
    
   
    return 0;
}









