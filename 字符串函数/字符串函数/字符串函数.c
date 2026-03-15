#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[] = "pangzheruishidashuige";
//	char arr2[100] = { 0 };
//	strcpy(arr2, arr);
//	char cop[] = "grs";
//	char* p = NULL;
//	for (p = strtok(arr2, cop); p != NULL; p = strtok(NULL, cop)) {
//		printf("%s\n", p);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr1[] = "xioayuwoxiangni";
//	char arr2[100] = { 0 };
//	strcpy(arr2, arr1);
//	char tok[] = "xy";
//	char* p = NULL;
//	for (p=strtok(arr2,tok);p!=NULL;p=strtok(NULL,tok)) {
//		printf("%s\n", p);
//	}
//	return 0;
//}
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main() {
	for(int i=0;i<10;i++){
	printf("%s\n",strerror(i));
	}
	return 0;
}