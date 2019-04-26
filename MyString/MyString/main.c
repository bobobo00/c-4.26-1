#define _CRT_SECURE_NO_WARNINGS 1
#include "MyString.h"
int main(){
	char str1[ROW] = "abcdef";
	char str2[] = "ghijk";
	/*MyStrcpy(str1,str2);
	printf("str1:%s", str1);*/
	MyStrcat(str1,str2);
	printf("str1:%s", str1);
	system("pause");
	return 0;
}