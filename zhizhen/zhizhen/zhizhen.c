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


//√∞≈›≈≈–Ú
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

//√∞≈›≈≈–Ú”≈ªØ∞Ê
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


//”√÷∏’Î∏¥œ÷strlen
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

#include<stdio.h>
void swap(int * a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}