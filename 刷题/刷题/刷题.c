#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    for (int i = 1; i <= a; i++) {
//        for (int j = 1; j<=a ; j++) {
//            if (i == a - j+1 || i == j) {
//                printf("*");
//            }
//            else { printf(" "); }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a; i++) {
//            for (int j = 0; j < a; j++) {
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
//                    printf("* ");
//                }
//                else {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int n, m;
//    int arr[10][10];
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int a;
//    int arr[10];
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//	int a, b;
//	int arr[2000];
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a + b; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < a + b; i++) {
//		for (int j = 0; j < a + b - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//			}
//		}
//	}
//	for (int i = 0; i < a + b; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int arr[10];
//	int sum = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		sum = arr[i]+ sum;
//	}
//	printf("%d\n", sum / 10);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	char arr1[]="pangzherui";
//	char arr2[]="da shui ge";
//	int num = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前的arr1[]=%s\n", arr1);
//	printf("交换前的arr2[]=%s\n", arr2);
//	for (int i = 0; i < num; i++) {
//		int c = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = c;
//	}
//	printf("交换后的arr1[]=%s\n", arr1);
//	printf("交换后的arr2[]=%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//void my_printf(int arr[], int len, char name[]) {
//	printf("%s=", name);
//	for (int i = 0; i < len; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr1[] = { 1,3,1,4 };
//	int arr2[] = { 5,2,1,0 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	my_printf(arr1, len, "交换前的arr1[]");
//	my_printf(arr2, len, "交换前的arr2[]");
//	for (int i = 0; i < len; i++) {
//		int c = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = c;
//	}
//	my_printf(arr1, len, "交换后的arr1[]");
//	my_printf(arr2, len, "交换后的arr2[]");
//	return 0;
//}

//二分查找
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key) {
//	int m = 0;
//	while (left<=right) {
//		 m = (left + right) / 2;
//		if (arr[m] < key) {
//			left = m + 1;
//		}
//		else if (arr[m] > key) {
//			right = m - 1;
//		}
//		else {
//			break;
//		}
//	}
//	if (arr[m] == key)return m;
//	else return - 1;
//}
//int main() {
//	int arr[100] = { 1,2,3,4,5,6,7,8,9,10,11,22,34,546,745 };
//	int c=bin_search(arr, 0, 14, 546);
//	if (c == -1)printf("没找到\n");
//	else printf("找到了%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//void mul(int num) {
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%-2d * %-2d = %-3d  ",j,i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a;
//	printf("请输入你想要的乘法口诀表的行数：\n");
//	scanf("%d", &a);
//	mul(a);
//	return 0;
//}

//#include<stdio.h>
//void Year(int num) {
//	if (num % 400 == 0 || (num % 4 == 0 && num % 100 != 0)) printf("%d是闰年\n", num);
//	else printf("%d不是润年\n", num);
//}
//int main() {
//	int year;
//	printf("输入你想判断的年份：");
//	scanf("%d", &year);
//	Year(year);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//is_prime(int num) {
//	int a = 0;
//	for (int i = 2; i <= sqrt(num); i++) {
//		if (num % i == 0) { 
//			a = 1; 
//			break;
//		}
//	}
//	if (a == 1)printf("%d不是素数\n",num);
//	else printf("%d是素数\n",num);
//}
//int main() {
//	int num;
//	printf("输入你要判断的数字：");
//	scanf("%d", &num);
//	is_prime(num);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//void is_prime(int num) {
//	int a = 0;
//	for (int i = 2; i <= sqrt(num); i++) {
//		if (num % i == 0) {
//			a = 1;
//			break;
//		}
//	}
//	if (a == 0) printf("%d ", num);
//	else return 0;
//}
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		is_prime(i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int init(int arr[],int len) {
//	for (int i = 0; i < len; i++) {
//		arr[i] = 0;
//	}
//	return 0;
//}
//void print(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int len) {
//	for (int i = 0; i < len/2; i++) {
//		int j = len - 1 - i;
//		int c = arr[i];
//		arr[i] = arr[j];
//		arr[j] = c;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	reverse(arr, len);
//	print(arr, len);
//	init(arr,len);
//	print(arr, len);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int total = 20;
//	int empty = 20;
//	int s = 0;
//	while (empty >= 2) {
//		int new = empty / 2;
//		total += new;
//		s = empty % 2;
//		empty = new + s;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//#define num 7
//#include<stdio.h>
//int main() {
//	for (int i = 0; i < num; i++) {
//		for (int j = num-1; j >= i; j--) {
//			printf(" ");
//		}
//		for (int z = 0; z < 2 * i + 1;z++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = num-1; i > 0; i--) {
//		for (int j = num; j >= i; j--) {
//			printf(" ");
//		}
//		for (int z = 0; z < 2 * i - 1;z++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <math.h>

int main() {
    int i, temp, n, sum, last;

    for (i = 0; i < 100000; i++) {
        temp = i;
        n = 0;

        // 1. 计算数字的位数
        while (temp != 0) {
            n++;
            temp /= 10;
        }

        temp = i;
        sum = 0;

        // 2. 计算每一位的n次方之和
        while (temp != 0) {
            last = temp % 10;
            sum += pow(last, n);
            temp /= 10;
        }

        // 3. 判断是否是自幂数
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}