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

//int main() {
//    int i, temp, n, sum, last;
//
//    for (i = 0; i < 100000; i++) {
//        temp = i;
//        n = 0;
//
//        // 1. 计算数字的位数
//        while (temp != 0) {
//            n++;
//            temp /= 10;
//        }
//
//        temp = i;
//        sum = 0;
//
//        // 2. 计算每一位的n次方之和
//        while (temp != 0) {
//            last = temp % 10;
//            sum += pow(last, n);
//            temp /= 10;
//        }
//
//        // 3. 判断是否是自幂数
//        if (sum == i) {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n, temp,sum;
//
//	for (int i = 0; i < 100000; i++) {	
//		n = 0;
//		temp = i;
//		//求出数字的位数n
//		while (temp != 0) {
//			temp = temp / 10;
//			n++;
//		}
//
//		temp = i;
//		sum = 0;
//		while (temp != 0) {
//			int last = temp % 10;
//			sum += pow(last, n);
//			temp = temp / 10;
//		}
//		if (sum == i) printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a;
//	printf("请输入一个数字:");
//	scanf("%d", &a);
//	int temp = a;
//	int sum = 0;
//	for (int n = 1; n <= 5;n++) {
//		sum += temp;
//		temp = a + temp * 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int DigitSum(int n) {
//	int a = n % 10;
//	if (n == 0)
//		return 0;
//	else
//	return a + DigitSum(n / 10);
//}
//int main() {
//	int m;
//	printf("请输入一个非负整数：");
//	scanf("%d", &m);
//	int a=DigitSum(m);
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int my_pow(int n,int k) {
//	if (k == 0) {
//		return 1;
//	}
//	else
//		return n * my_pow(n, k - 1);
//}
//int main() {
//	int a,b;
//	scanf("%d %d", &a,&b);
//	printf("%d\n",my_pow(a, b));
//	return 0;
//}

//斐波那契f(n)=f(n-1)+f(n-2)
//#include<stdio.h>
//int fei(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	if (n == 1) {
//		return 1;
//	}
//	return fei(n - 1) + fei(n - 2);
//}
//int main() {
//	int a;
//	while (scanf("%d", &a) != EOF) {
//    printf("%d\n\n", fei(a));
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	
//	for (int i = 0; i < num; i++) {
//		int a = 0;
//		for (int j = 0; j < num; j++) {
//			if ((arr[i] == arr[j])&&(i!=j)) {
//				a = 1;
//				break;
//			}
//		}
//		if (a == 0)printf("%d\n", arr[i]);
//	}
//	return 0;
//}
	
//#include<stdio.h>
//int main() {
//	int a = 2;
//	int b = 10;
//	printf("交换前：%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("交换前：%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < num; i++) {
//		int a = 0;
//		for (int j = 0; j < num; j++) {
//			if ((arr[i] == arr[j]) && (i != j)) {
//				a = 1;
//			}
//		}
//		if (a == 0)printf("%d \n", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if ((n & (1 << i)) != 0) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	while (n != 0) {
//		n &= n - 1;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("偶数位：\n");
//	for (int i = 0; i < 32; i+=2) {
//		printf("%d ", (n>>i)& 1);
//	}
//	printf("\n奇数位：\n");
//	for (int j = 1; j < 32; j+=2) {
//		printf("%d ", (n >>j) &1);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("偶数位：\n");
//	for (int i = 0; i < 32; i+=2) {
//		int c = (n >> i) & 1;
//		printf("%d ",c);
//	}
//	printf("\n奇数位：\n");
//	for (int j = 1; j < 32; j+=2) {
//		int a = (n >> j) & 1;
//		printf("%d ", a);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		int n = (a >> i) & 1;
//		int m = (b >> i) & 1;
//		if (n != m)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	char arr[10000] = { 0 };
//	int i = 0;
//	while ((arr[i]=getchar())!='\n') {
//		i++;
//	}
//	i--;
//	while (i>=0) {
//		printf("%c", arr[i]);
//		i--;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	char arr[1000];
//	int i = 0;
//	printf("输入一段字符串：");
//	while ((arr[i] = getchar()) != '\n') {
//		i++;
//	}
//	printf("输入你要左旋字符的个数：");
//	int num;
//	scanf("%d", &num);
//	for (int j = 0; j < num; j++) {
//		arr[i + j] = arr[j];
//	}
//	while (i >= num) {
//		printf("%c", arr[num+i--]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void hanshu(char arr[], int n, int m) {
//	int i = 0;
//	while (i <= n) {
//	arr[i] = arr[m];
//	i++;
//	m--;
//	}
//}
//int main() {
//	char arr[1000];
//	int i = 0;
//	printf("输入一段字符：");
//	while ((arr[i] = getchar()) != '\n')i++;
//	i--;
//	printf("输入你要左旋的字符个数：");
//	int k;
//	scanf("%d", &k);
//	int c = sizeof(arr) / sizeof(arr[0]);
//	hanshu(arr, k, c-1);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//void fanzhuan(char arr[],int n,int m) {
//	while (n < m) {
//		char t = arr[n];
//		arr[n] = arr[m];
//		arr[m] = t;
//		n++;
//		m--;
//	}
//}
//void sanci(char arr[],int n,int m) {
//	int len = strlen(arr);
//	fanzhuan(arr, n, m-1);
//	fanzhuan(arr, m, len-1);
//	fanzhuan(arr, n, len-1);
//}
//int main() {
//	char arr[1000];
//	int i = 0;
//	printf("输入一段字符：");
//	while ((arr[i] = getchar()) != '\n') i++;
//	arr[i] = '\0';
//	int k;
//	printf("输入你想要左旋的字符个数：");
//	scanf("%d", &k);
//	int len = strlen(arr);
//	sanci(arr, 0, k);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* arr) {
//	char* p = arr;
//	int j = 0;
//	while (*p) {
//			p++;
//			j++;
//	}
//	return j;
//}
//int main() {
//	char arr[1000];
//	int i = 0;
//	while ((arr[i] = getchar()) != '\n') i++;
//	arr[i] = '\0';
//	int c=my_strlen(arr);
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void hanshu(int arr[],int len) {
//	int s[100];
//	int j = 0;
//	for (int i = 0; i < len; i++) {
//		if (arr[i] % 2 == 1) {
//			s[j++] = arr[i];
//		}
//	}
//	for(int x=0;x<len;x++){
//		if (arr[x] % 2 == 0) {
//			s[j++] = arr[x];
//		}
//	}
//	memcpy(arr, s, len * sizeof(int));
//}
//int main() {
//	int arr[100];
//	int i=0, num=0;
//	while ((scanf("%d",&i)==1)){
//		arr[num] = i;
//		num++;
//		if (getchar() == '\n')break;
//	}
//	hanshu(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void hanshu(int arr[], int num) {
//	int left = 0;
//	int right = num-1;
//	while (left < right) {
//		while (arr[left] % 2 != 0)left++;
//		while (arr[right] % 2 != 1)right--;
//		if (left < right) {
//			int c = arr[left];
//			arr[left] = arr[right];
//			arr[right] = c;
//		}
//	}
//}
//
//int main() {
//	int arr[100];
//	int i = 0, num = 0;
//	while ((scanf("%d", &i) == 1)) {
//		arr[num] = i;
//		num++;
//		if (getchar() == '\n')break;
//	}
//	hanshu(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++) {
//	printf("%d ", *(p + i));
//	}
//	return 0;
//}

//冒泡排序
//#include<stdio.h>
//void maopao(int arr[], int len) {
//	for (int i = 0; i < len-1; i++) {
//		int npc = 1;
//		for (int j = 0; j < len - i-1; j++) {
//			if (arr[j] > arr[j+1]) {
//				int c = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = c;
//				npc = 0;
//			}
//		}
//		if (npc == 1)break;
//	}
//}
//int main() {
//	int arr[100];
//	int num = 0, c = 0;
//	while (1) {
//		while ((c = getchar()) == ' ' || c=='\t');
//		if (c == '\n')break;
//		ungetc(c, stdin);
//		scanf("%d", &arr[num++]);
//	}
//	maopao(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void maopao(int arr[], int len) {
//	int last = 0;
//	int bord = len - 1;
//	while(bord>0)
//	 {
//		int npc = 1;
//		for (int j = 0; j < bord; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//				npc = 0;
//				last = j;
//			}
//		}
//		bord = last;
//		if (npc == 1)break;
//	}
//}
//int main() {
//	int arr[100];
//	int num = 0, c = 0;
//	while (1) {
//		while ((c = getchar()) == ' ' || c == '\t');
//		if (c == '\n')break;
//		ungetc(c, stdin);
//		scanf("%d", &arr[num++]);
//	}
//	maopao(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void maopao(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	int last = left;
//	while(left<right) {
//		int npc = 1;
//		for (int j = left; j < right; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//				npc = 0;
//				last = j;
//			}
//		}
//		right = last;
//		for (int j = right; j > left; j--) {
//			if (arr[j] < arr[j - 1]) {
//				int c = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = c;
//				npc = 0;
//				last = j;
//			}
//		}
//		left = last;
//		if (npc == 1)break;
//	}
//}
//int main() {
//	int arr[100];
//	int num = 0, c = 0;
//	while (1) {
//		while ((c = getchar()) == ' ' || c == '\t');
//		if (c == '\n')break;
//		ungetc(c, stdin);
//		scanf("%d", &arr[num++]);
//	}
//	maopao(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



#include<stdio.h>
//void maopao(int arr[], int len) {
//	int right = len - 1;
//	int left = 0;
//	int last = 0;
//	while(left<right) {
//		int npc = 0;
//		for (int j = 0; j < right; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int c = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = c;
//				npc = 1;
//				last = j;
//			}
//		}
//		right = last;
//		for (int j = right; j >left; j--) {
//			if (arr[j] < arr[j - 1]) {
//				int c = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = c;
//				npc = 1;
//				last = j;
//			}
//		}
//		left=last;
//		if (npc == 0)break;
//	}
//}

//#include<stdio.h>
//#include<string.h>
//void zuoxuan(char arr[],int n,int m) {
//	while (n < m) {
//		char c = arr[n];
//		arr[n] = arr[m];
//		arr[m] = c;
//		m--;
//		n++;
//	}
//}
//
//int main() {
//	char arr[100];
//	int i = 0;
//	int n;
//	printf("输入一段字符：");
//	while ((arr[i] = getchar()) != '\n')i++;
//	arr[i] = '\0';
//	printf("输入你要左旋的个数：");
//	scanf("%d", &n);
//	int len = strlen(arr);
//	zuoxuan(arr, 0, n-1);
//	zuoxuan(arr,n, len - 1);
//	zuoxuan(arr,0, len - 1);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void zuoxuan(char arr[],int n,int m) {
//	while (n < m) {
//	char c = arr[n];
//	arr[n] = arr[m];
//	arr[m] = c;
//	n++;
//	m--;
//	}
//}
//int main() {
//	char arr[1000];
//	printf("输入一段字符：");
//	int i = 0;
//	while ((arr[i] = getchar()) != '\n')i++;
//	arr[i] = '\0';
//	int len = strlen(arr);
//	printf("输入你要左旋的字符个数：");
//	int n;
//	scanf("%d", &n);
//	zuoxuan(arr, 0, n - 1);
//	zuoxuan(arr, n, len - 1);
//	zuoxuan(arr, 0, len - 1);
//	printf("%s", arr);
//	return 0;
//}	



//#include<stdio.h>
//void jiou(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		while (arr[left] % 2 == 1&& left < right)left++;
//		while (arr[right] % 2 ==0&& left < right)right--;
//		int c = arr[left];
//		arr[left] = arr[right];
//		arr[right] = c;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int c,num = 0;
//	int arr[1000];
//	while (1) {
//		while ((c = getchar()) == ' ' || c=='\t');
//		if (c == '\n')break;
//		ungetc(c, stdin);
//		scanf("%d", &arr[num++]);
//	}
//	jiou(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	while (p<arr+len) {
//		printf("%d ", *(p++));
//	}
//	return 0;
//}


//#include<stdio.h>
//void maopao(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	int last = len-1;
//	while (left < right) {
//		int npc = 0;
//		for (int i = left; i < right; i++) {
//		if (arr[i] > arr[i + 1]) {
//			int c = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = c;
//			npc = 1;
//			last = i;
//		}
//		}
//		left=last;
//		for (int i = right; i > left; i--) {
//			if (arr[i-1] > arr[i]) {
//				int c = arr[i];
//				arr[i-1] = arr[i];
//				arr[i] = c;
//				npc = 1;
//				last = i;
//			}
//		}
//		right=last;
//		if (npc == 0)break;
//	}
//}
//int main() {
//	int arr[1000];
//	int c = 0, num = 0;
//	while (1) {
//		while ((c = getchar()) == ' ' || c == '\t');
//		if (c == '\n')break;
//		ungetc(c, stdin);
//		scanf("%d", &arr[num++]);
//	}
//	maopao(arr, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void zuoxuan(char arr[], int n, int m) {
//	while (n < m) {
//		char c = arr[n];
//		arr[n] = arr[m];
//		arr[m] = c;
//		n++;
//		m--;
//	}
//}
//int if_zuoxuan(char arr1[],char arr2[], int len) {
//	int i = 0;
//	char arr3[1000];
//	
//	while (i < len) {
//	strcpy(arr3, arr1);
//    zuoxuan(arr3, 0, i);
//	zuoxuan(arr3, i, len - 1);
//	zuoxuan(arr3, 0, len - 1);
//	i++;
//	if (strcmp(arr3, arr2) == 0) {
//		return 1;
//	}
//	}
//	if (strcmp(arr3, arr2) != 0)
//		return 0;
//}
//int main() {
//	char arr1[1000];
//	char arr2[1000];
//	printf("输入字符串1：");
//	int i = 0;
//	while ((arr1[i] = getchar()) != '\n')i++;
//	arr1[i] = '\0';
//	int len1 = strlen(arr1);
//	printf("输入字符串2：");
//	int j = 0;
//	while ((arr2[j] = getchar()) != '\n')j++;
//	arr2[j] = '\0';
//	int len2 = strlen(arr2);
//	int c = if_zuoxuan(arr1, arr2, len1);
//	if (c == 0)printf("字符串1不是由字符串2旋转得到\n");
//	else
//		printf("字符串1是由字符串2旋转得到\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int if_zuoxuan(char arr1[], char arr2[]) {
//	char c[1000];
//	strcpy(c, arr1);
//	strcat(c, c);
//	if (strstr(c, arr2) != NULL)return 1;
//	else return 0;
//}
//int main() {
//	char arr1[1000];
//	char arr2[1000];
//	printf("输入字符串1：");
//	int i = 0;
//	while ((arr1[i] = getchar()) != '\n')i++;
//	arr1[i] = '\0';
//	printf("输入字符串2：");
//	int j = 0;
//	while ((arr2[j] = getchar()) != '\n')j++;
//	arr2[j] = '\0';
//	int c = if_zuoxuan(arr1, arr2);
//	if (c == 0)printf("字符串1不是由字符串2旋转得到\n");
//	else
//		printf("字符串1是由字符串2旋转得到\n");
//	return 0;
//}

////左旋函数
//void zuoxuan(char arr1[],char arr2[],int num) {
//	char a[1000];
//	strcpy(a, arr1+num);
//	strncat(a, arr1, num);
//}





//int chazhao(int arr[][10], int row, int col,int num) {
//	int x = 0;
//	int y = col - 1;
//	while (x < row && y >= 0) {
//		if (arr[x][y] == num) {
//			return 0;
//		}
//	else if (arr[x][y] < num)
//		x++;
//	else
//		y--;
//}
//	return 1;
//}
//
//#include<stdio.h>
//int main() {
//	int arr[5][5] = {1,2,3,4,5,
//					 2,3,4,5,6,
//					 5,6,8,9,10,
//	                 7,12,14,16,17,
//					 8,24,35,53,64};
//	int num;
//	printf("输入你要查找的数字:");
//	scanf("%d", &num);
//	int c=chazhao(arr, 5, 5, num);
//	if (c == 0)printf("找到了\n");
//	else printf("没找到\n");
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	char killer = 0;
//	for (killer = 'a'; killer <= 'b'; killer++) {
//	int A = (killer!='a');
//	int B = (killer == 'c');
//	int C = (killer == 'd');
//	int D = (killer != 'd');
//	if ((A + B + C + D) == 3) {
//			printf("killer=%c", killer);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char killer = 0;
//	for (killer = 'a'; killer <= 'e'; killer++) {
//	int A = (killer=='c');
//	int B = (killer != 'b');
//	int C = (killer == 'e');
//	int D = (killer != 'c');
//	int E = (killer != 'b');
//	if ((A + B + C + D+E) == 3) {
//			printf("killer=%c", killer);
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#define n 10
//int main() {
//	int arr[n][n] = { 0 };
//	int i, j;
//	for (i = 0; i < n; i++) {
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//		for (j = 1; j <i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
int danshegou(int *arr,int *s,int len) {
	int num = 0;
	for (int i = 0; i < len; i++) {
		int count = 0;
		for (int j = 0; j < len; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count == 1) {
			s[num++] = arr[i];
		}
	}
	return num;
}
int main() {
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int gou[1000];
	int num=danshegou(arr, gou,len);
	for (int i = 0; i < num; i++) {
		printf("%d ", gou[i]);
	}
	return 0;
}