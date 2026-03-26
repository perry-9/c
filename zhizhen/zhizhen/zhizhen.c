#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void my_print1(int arr[3][5], int row, int col) {
//    int i = 0;
//    for(int i=0;i<row;i++) {
//        for(int j=0;j<col;j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//	}
//}
//void my_print2(int (*arr)[5], int row, int col) {
//    int i = 0;
//    for(int i=0;i<row;i++) {
//        for(int j=0;j<col;j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	my_print1(arr, 3, 5);
//    my_print2(arr, 3, 5);
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz) {
//	for (int i = 0; i < sz-1; i++) {
//		for (int j = 0; j < sz - 1; j++) {
//			if(arr[j] > arr[j+1]){
//				int c = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = c;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 21,423,534,352,122,212,21,41,421,24,21,4,6,2,64,2156 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//冒泡排序优化版
//#include<stdio.h>
//void bubble_sort(int arr[], int sz) {
//	for (int i = 0; i < sz-1; i++) {
//		int flag = 1;
//		for (int j = 0; j < sz-1; j++) {
//			if (arr[j]> arr[j + 1]) {
//				flag = 0;
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//			}
//		}
//		if (flag == 1) break;
//	}
//}
//int main() {
//	int arr[] = { 12,3224,35,14,412,215,2325,47,21,5,135,7,23,623 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;\
//}

//#include<stdio.h>
//int main() {
//	char a[] = "pangzherui";
//	
//	printf("%s\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int* p1[10];
//	int a = 1, b = 2, c = 3;
//	p1[0] = &a;
//	p1[1] = &b;
//	p1[2] = &c;
//	printf("%d\n", *p1[0]);
//
//	int arr[3][5] = {
//		{1,2,3},{2,3,4},{3,4,5}
//	};
//	int (*p)[5] = arr;
//	printf("%d\n", (*p)[1]);
//	printf("%d\n", (*p + 1)[2]);
//	printf("%d\n", (*p + 2)[1]);
//
//	int arr3[4][5] = { {1,2,3,4},{2,4,5,7},{3,4,6,7} };
//	int (*p2)[5] = arr3;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", (*(p2 + i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void test() {
//	int a = 10;
//	int b = 20;
//	int const* p = &a;
//	*p = 20;
//	p = &b;
//}

//#include<stdio.h>
//#include<assert.h>
//int main() {
//	assert(0);
//	return 0;
//}


//用指针复现strlen
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* str){
//	int count = 0;
//	assert(str);
//	while (*str) {
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "pangzhrtui";
//	int c=my_strlen(arr);
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//void swap(int * a, int* b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//#include<stdio.h>
//int my_len(int arr1[]) {
//	int c = sizeof(arr1) / sizeof(arr1[0]);
//	return c;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len1 = sizeof(arr) / sizeof(arr[0]);
//	int len2 = my_len(arr);
//	printf("len1=%d\n", len1);
//	printf("len2=%d\n", len2);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 10;
//	int* p = &a;
//	int** pa = &p;
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[3];
//	p[0] = &a;
//	p[1] = &b;
//	p[2] = &c;
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", *p[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int (*p)[5] = arr;
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", (*p)[i]);
//	}
//	return 0;
//}

//指针数组模拟二维数组
//#include<stdio.h>
//int main() {
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 2,3,4 };
//	int arr3[3] = { 4,5,6 };
//	int* p[3] = { arr1,arr2,arr3 };
//	//arr1,arr2,arr3是数组首元素的地址类型是int*，可以放到int*p里
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//		 printf("%d ", (*(p+1))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针模拟二维数组
//#include<stdio.h>
//int main() {
//	int arr[3][5] = { {1,2,3},{2,3,4},{3,4,5} };
//	int (*p)[5] = arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", (*(p + i))[j]);
//			//也可以写成（*(*(p + i))+j）
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int add(int a, int b) {
//	int c = a + b;
//	return c;
//}
//int main() {
//	int (*p)(int x, int y)=add;
//	int x = 10;
//	int y = 30;
//	printf("%d\n",(*p)(x, y));
//	printf("%d\n",p(x, y));
//	return 0;
//}

#include<stdio.h>
void mnue() {
	printf("****************************\n");
	printf("******1.add    2.sub  ******\n");
	printf("******3.mul    4,div  ******\n");
	printf("******     0.exit    *******\n");
	printf("****************************\n");
}
int add(int a, int b) {
	int c = a + b;
	return c;
}
int sub(int a, int b) {
	int c = a - b;
	return c;
}
int mul(int a, int b) {
	int c = a * b;
	return c;
}
int div(int a, int b) {
	int c = a / b;
	return c;
}
int main() {
	int input=0,a,b;
	int (*p[5])(int, int) = { NULL,add,sub,mul,div };
	do {
		mnue();
		printf("请选择你想要的运算：\n");
		scanf("%d", &input);
		if (input == 0) break;
		while (input < 0 || input>4) {
			printf("请选择正确的数字:\n");
			scanf("%d", &input);
		}
		printf("请输入你要计算的数字:\n");
		scanf("%d %d", &a, &b);
		int result = p[input](a, b);
		printf("%d\n", result);
	} while (input);
	return 0;
}
