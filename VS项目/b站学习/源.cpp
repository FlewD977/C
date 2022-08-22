#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Strlend(char* srt) {
//	char* start = srt;
//	char* end = srt;
//
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main() {
////求字符串长度
//	char my_srt[] = "bit";   //b i t \0
//	int len = Strlend(my_srt);
//	printf("%d\n",len);
//}


//int main() {
//	int arr[5];
//	int* vp;
//
//	for (vp = &arr[5]; vp> &arr[0] ; )  //此时vp指向的是下标5的地址也就是越界了 
//	{
//		*--vp = 0;   //前置--让vp先自减 然后解引用赋值为0 使程序完美运行
//	}
//}

//int main() {
	//printf("%d",sizeof(ar));

	//int ar[5] = { 1,2,3,4,5 };
	//printf("%p\n",ar);	   //00000028C0AFFB18
	//printf("%p\n",ar+1);	   //00000028C0AFFB18

	//printf("%p\n",&ar[0]); //00000028C0AFFB18
	//printf("%p\n",&ar[0]+1); //00000028C0AFFB18

	//printf("%p\n", &ar);	//00000028C0AFFB18
	//printf("%p\n", &ar+1);	//000000C9878FF8FC

	//int arr[10] = {0};
	//int* p = arr; //将首元素地址交给指针p
	//for (int i = 0; i < 10; i++){
	//	printf("%p===%p===%d===%p\n", p + i, *p + i, *p + i, &arr[i]);
	//}

	//return 0;

	//int a = 10;
	//int* pa = &a;	//一级指针     pa是一级指针变量 int*则是一级指针类型
	//int** ppa = &pa;	//二级指针 三级类似
	//printf("%d\n", **ppa+=20);
	//printf("%d\n", a);


	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr2[5] = {&a,&b,&c};
	//return 0;

	//结构体
	//描述一个学生的数据
	//第一个写法
	//struct MyStruct_1 //struct是结构体关键字 Mystruct是结构体标签可以随意替换 
	//{
	//	//成员变量
	//	char name[20];
	//	short age;
	//	char tele[12];
	//	char sex[5];
	//};//s1,s2,s3是三个全局的结构体变量
	//struct MyStruct_1 s; //struct MyStruct是一个结构体类型 s是一个创建的局部变量 

	//第二种写法
	//typedef struct MyStruct_2 //typedef将类型重命名
	//{
		//char name[20];
		//struct MyStruct_1 s_all_1;
	//}stu;//将这个结构体类型重新命名为stu
	//stu ss1;//可以直接使用重命名后名称来创建变量
	//stu s1 = { "flew",20,"12345678912" ,"男"};
	//结构体中的成员可以是其他结构体
	//stu s_all = { "flew",{"hello",18,"12345678912","男"} };

	

	/*typedef struct T
	{
		short age;
		char name[20];
	}stu;*/

	//struct TT
	//{
	//	struct T T_1;
	//	char sex[5];
	//};
	//struct TT TT_all = { {18,"flew"},"男"};
	////打印
	//printf("%s\n",TT_all.T_1.name); //flew

	//return 0;

//}

//	//结构体传参
//typedef struct stu   //全局结构体
//{
//	char name[20];
//
//	short age;
//}stu;
//
//void print1(stu tmp) 
//{
//	printf("年龄是：%d\n", tmp.age);
//	printf("名字是：%s\n", tmp.name);
//}
////结构体指针
//void print2(stu* p) {
//	printf("%d\n",p->age);
//	printf("%s\n",p->name);
//}
//int main()
//{
//
//	stu s = { "唔使明" , 25 };
//	print1(s);
//	print2(&s); 
//	return 0;
//}


//#include<stdlib.h>
////int main() {
////	int i = 0;
////	for ( ;  i < 100; i++)
////	{
////		printf("%d \n", i);
////	}
////	system("pause");//系统命令 暂停
////	return 0;
////}


int main() {
	//求1！+2！+3！+4！....+n！的阶乘，不考虑溢出
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d\n",&n);
	for ( i = 1; i <=n; i++)
	{
		int j = 0;
		ret = 1;
		for ( j = 1; j <=i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}