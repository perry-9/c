#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p != NULL) {
//	for (int i = 0; i < 10; i++) {
//		printf("%d", *(p + 1));
//	}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int* create_array(int n, int val) {
//	int* p = (int*)malloc(n * sizeof(int));
//	if (p != NULL) {
//	memset(p, val,n*sizeof(int));
//	}
//	return p;
//}
//int main() {
//	int c = 0;
//	scanf("%d", &c);
//	int* n = create_array(c,0);
//	for (int i = 0; i < c; i++) {
//		printf("%d ", *(n + i));
//	}
//	printf("\n");
//	free(n);
//	n = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int old_len, new_len;
//	scanf("%d %d", &old_len, &new_len);
//	int* arr = malloc(old_len * sizeof(int));
//	if (arr == NULL) {
//		return 1;
//	}
//	for (int i = 0; i < old_len; i++) {
//		*(arr + i) = 1;
//	}
//	int* arr2 = realloc(arr,new_len*sizeof(int));
//	if (arr2 == NULL) {
//		return 1;
//	}
//	arr = arr2;
//	for (int i = old_len; i < new_len; i++) {
//		*(arr + i) = 2;
//	}
//	for (int i = 0; i < new_len; i++) {
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int score;
//};
//int main() {
//	int n;
//	scanf("%d", &n);
//	struct stu* p = (struct stu*)malloc(n * sizeof(struct stu));
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%s", &(p+i)->name);
//		scanf("%d", &(p + i)->score);
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++) {
//		printf("%s %d\n", (p + i)->name,(p+i)->score);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main() {
//	for (int i = 10000; i <= 99999; i++) {
//		int sum = 0;
//		for (int j = 10; j <= 10000; j*=10) {
//			int a = i / j;
//			int b = i % j;
//			sum += a * b;
//		}
//		if (sum==i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#include<stdio.h>
union stu
{
	int i;
	char a;
}s;
int hanshu(){
if (s.a == 1) {
	return 1;
}
else
return 0;
}
int main() {
	s.i = 1;
	if (hanshu() == 1) {
		printf("Ð¡¶Ë\n");
	}
	else
		printf("´ó¶Ë\n");
	return 0;
}