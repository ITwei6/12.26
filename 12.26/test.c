#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct Stu
//{
//	char name[10];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}Stu;//分号不能丢掉
//struct Point
//{
//	int x;
//	int y;//声明结构成员变量类型
//}p1;//同时又定义变量p1；
//
//struct Point p2//定义结构体变量p2
//
//	struct Point p3 = { x,y };	//初始化：定义变量的同时赋初始值。
//	
//struct Stu//           结构体类型声明
//{
//	char name[15];//名字
//	int age;//年龄
//};
//struct Stu s = { "zhangsan",20 };//初始化
//struct Point
//	{
//		int x;
//		int y;//声明结构成员变量类型
//	}p1;//同时又定义变量p1；
//struct Node
//{
//	int date;
//	struct Point p;
//	struct Node* next;
//}n1={10,{4,5},NULL};             //结构体嵌套初始化
//struct Node n2 = { 20,{5,6},NULL };
//
//int main()
//{
//	struct S s;
//	strcpy(s.name, "zhangsan");//使用.访问name成员’
//	s.age = 20;//使用.访问age成员
//	return 0;
//}
//struct Stu
//{
//	char name[10];
//	int age;
//};
//void print(struct Stu* ps)//print函数接收结构体地址，定义为ps
//{
//	printf("name=%s   age=%d\n", (*ps).name, (*ps).age);//利用解引用操作符来访问指针
//	//使用结构体指针访问指向对象的成员
//	printf("name=%s   age=%d\n", ps->name, ps->age);//->重点
//}
//int main()
//{ 
//	struct Stu s = { "zhangsan",20 };
//	print(&s);//结构体地址传参，把结构体s的地址传过去
//	return 0;
//}

//struct Stu
//{
//	int id[1000];//构建结构体
//	int age;
//};
//struct Stu s = { {220503430},20 };//结构体初始化
////结构体传参
//void print1(struct Stu s)
//{
//	printf("%d\n", s.age);
//}
////结构体地址传参
//void print2(struct Stu* ps)
//{
//	printf("%d\n", (*ps).age);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	print1(s);//传结构体
//	print2(&s);//传结构体地址
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int y[5 + 3] = { 1,2,3,4 };
//	printf("%d", y[0]);
//	return 0;
//}5 99999 4 9999 3 999 pow(10,n)
#include <math.h>
void Print(int n)
{
	int i;
	for (i = 1;i < pow(10, n);i++)
	{
		printf("%d,", i);
	}
	
}
int main()
{
	int n;
	scanf("%d", &n);
	Print(n);
	return 0;
}