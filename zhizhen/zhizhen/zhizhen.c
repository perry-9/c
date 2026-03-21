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


//Ã°ÅÝÅÅÐò
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

//Ã°ÅÝÅÅÐòÓÅ»¯°æ
#include<stdio.h>
void bubble_sort(int arr[], int sz) {
	for (int i = 0; i < sz-1; i++) {
		int flag = 1;
		for (int j = 0; j < sz-1; j++) {
			if (arr[j]> arr[j + 1]) {
				flag = 0;
				int c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
		}
		if (flag == 1) break;
	}
}
int main() {
	int arr[] = { 12,3224,35,14,412,215,2325,47,21,5,135,7,23,623 };
	int num = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, num);
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	return 0;\
}