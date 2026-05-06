#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	FILE* p=fopen("666.txt", "w");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++) {
//		fputc(i, p);
//	}
//	for (int i = 0; i < 27; i++) {
//		int c = fgetc(p);
//		if (c == EOF) {
//			if (feof(p)) {
//				printf("遇到了文件末尾\n");
//			}
//			else if (ferror(p)) {
//				printf("读取发生错误\n");
//			}
//		}
//		else {
//			fputc(c, stdout);
//		}
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//#include <stdio.h>
//struct Stu
//{
//	char name[30];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu b = { "zhangsan", 20, 85.5f };
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}fprintf(fp, "%s %d %.1f", b.name, b.age, b.score);
//	//不再使⽤⽂件时，需要关闭⽂件
//	fclose(fp);
//	fp = NULL; //将指针置为NULL,避免成为野指针。
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	FILE* p = fopen("lainxi", "w+");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 0; i < 12; i++) {
//		fprintf(p,"%d", i);
//	}
//	rewind(p);
//	char arr[100];
//	if (fgets(arr,sizeof(arr),p) != NULL) {
//		fputs(arr, stdout);
//	}
//	rewind(p);
//	char arr2[200];
//	fscanf(p,"%s\n",arr2);
//	fputs(arr2,stdout);
//	fprintf(stdout,"%s\n", arr2);
//	printf("%s\n",arr2);
//	puts(arr2);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//#include<stdio.h>
//struct stu  
//{
//	char name[100];
//	int age;
//};
//int main() {
//	struct stu s1 = { "pangzherui",20 };
//	FILE* p = fopen("lainxi", "w+");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	fprintf(p, "%s %d", s1.name, s1.age);
//	rewind(p);
//	fscanf(p, "%s %d", s1.name,&s1.age);
//	fprintf(stdout, "%s %d",s1.name,s1.age);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//struct stu
//{
//	char name[100];
//	int age;
//};
//int main() {
//	struct stu s1 = {0};
//	char arr[100] = "pangzherui 21";
//	sscanf(arr, "%s %d", s1.name, &s1.age);
//	printf("%s %d", s1.name,s1.age);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    FILE* pf = fopen("data.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    int ch = fgetc(pf);
//    printf("%c\n", ch);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//
//    fseek(pf, -2, SEEK_END);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//    int c = ftell(pf);
//    printf("%d", c);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	FILE* p = fopen("huanchongqu", "w");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	fputs("pangzherui", p);
//	printf("缓冲10秒\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(p);
//	Sleep(10000);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	FILE* p = fopen("huanchongqu", "w+");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	fputs("pangzherui", p);
//	fseek(p, 0, SEEK_SET);
//	int ch = fgetc(p);
//	printf("%c", ch);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	FILE* p = fopen("p", "w");//以“w”的形式打开⽂件，如果⽂件不存在，则建立一个新的文件
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	int ch=fputc('a', p);  //用ch来接收返回的值
//	printf("%c", ch);
//	fclose(p);
//	p = NULL; //将p置为NULL避免p成为野指针
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	FILE* p = fopen("p", "w+");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++) {
//		fputc(i, p);
//	}
//	rewind(p);
//	int ch;
//	for (int i = 'a'; i <='z'; i++) {
//	 ch= fgetc(p);
//	 fputc(ch,stdout);
//	}
//	fclose(p);
//	p = NULL; //将p置为NULL避免p成为野指针
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	FILE* p = fopen("secondday", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++) {
//		fputc(i, p);
//	}
//	rewind(p);
//	int ch;
//	for (int i = 'a'; i <= 'z'; i++) {
//		ch = fgetc(p);
//		if (ch== EOF) {
//			if (feof(p)) {
//				printf("读取到了结束标识符\n");
//			}
//			else if(ferror(p)) {
//				printf("读取到了错误标识符\n");
//			}
//		}
//		else {
//			printf("%c",ch);
//		}
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	FILE* p = fopen("secondday", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	fputs("abcdefghijklmnopqrstuvwxyz", p);
//	rewind(p);
//	int ch;
//	for (int i = 'a'; i <= 'z'; i++) {
//		ch = fgetc(p);
//		if (ch == EOF) {
//			if (feof(p)) {
//				printf("读取到了结束标识符\n");
//			}
//			else if (ferror(p)) {
//				printf("读取到了错误标识符\n");
//			}
//		}
//		else {
//			printf("%c", ch);
//		}
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	FILE* p = fopen("secondday", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	fputs("abcdefghijklmnopqrstuvwxyz", p);
//	rewind(p);
//	int ch[100];
//	fgets(ch, 100, p);
//		if (ch == EOF) {
//			if (feof(p)) {
//				printf("读取到了结束标识符\n");
//			}
//			else if (ferror(p)) {
//				printf("读取到了错误标识符\n");
//			}
//		}
//		else {
//			fputs(ch, stdout);
//		}
//	fclose(p);
//	p = NULL;
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	FILE* p = fopen("secondday", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	int a;
//	a=fprintf(p, "%d", 123456789);
//	if (a < 0) {
//		if(ferror(p)) {
//			printf("检测到了出错标识符\n");
//		}
//	}
//	rewind(p);
//	char ch[100];
//	fgets(ch, 100, p);
//	fputs(ch, stdout);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//struct stu {
//	char name[100];
//	int age;
//};
//int main() {
//	struct stu s1 = { "perry", 20 };
//	FILE* p = fopen("second-day", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	fprintf(p, "%s %d", s1.name, s1.age); //将结构体的数据以字符串的格式储存到文件中
//	rewind(p);
//	char ch[100];
//	fgets(ch, 100, p);
//	fputs(ch, stdout);   //stdout输出到屏幕上
//	printf("\n");
//	rewind(p);
//	fscanf(p, "%s %d", s1.name, &s1.age);
//	fprintf(stdout, "%s %d", s1.name, s1.age);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	FILE* p = fopen("secondday", "w+");
//	if (p == NULL) {
//		perror("fopen:");
//		return 1;
//	}
//	int a;
//	a = fprintf(p, "%d", 123456789);
//	if (a < 0) {
//		if (ferror(p)) {
//			printf("检测到了出错标识符\n");
//		}
//	}
//	fseek(p, 4, SEEK_SET); //从5的位置开始读取
//	char ch[100];
//	fgets(ch, 100, p);
//	fputs(ch, stdout);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

#include<stdio.h>
int main() {
	FILE* p = fopen("data.txt", "r");
	if (p == NULL) {
		perror("fopen");
		return 1;
	}
	char arr[1000];
	fgets(arr, sizeof(arr), p);
	FILE* pf = fopen("data_copy.txt", "w");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	fputs(arr, pf);
	fclose(p);
	p = NULL;
	fclose(pf);
	pf = NULL;
	return 0;
}