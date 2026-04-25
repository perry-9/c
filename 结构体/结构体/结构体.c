#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//struct stu
//{
//	int age;
//	char name[20];
//	int date;
//};
//typedef struct {
//	int age;
//	char name[20];
//	int date;
//}stu;
//stu aa;
//stu* p = &aa;
//
//int main() {
//	struct stu s1 = { 18,"pangzherui",99 };
//	struct stu s2 = { 20,"张三",100 };
//	struct stu s4;
//	aa.age = 19;
//	strcpy(aa.name, "王五");
//	aa.date = 21;
//	s4.age = 21;
//	strcpy(s4.name, "李四");
//	printf("%s\n", s4.name);
//	printf("%d", p->age);
//}

//联合体
//#include<stdio.h>
//union stu
//{
//	char name[10];
//	int i;
//};
//int main() {
//	union stu a1 = { 0 };
//	printf("%p\n", &(a1.name));
//	printf("%p\n", &(a1.i));
//	printf("%p\n", &a1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

#include<stdio.h>
int main()
{
    union
    {
        short k;
        char i[2];
    }*s, a;
    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    printf("%x\n", a.k);
    return 0;
}