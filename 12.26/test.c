#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct Stu
//{
//	char name[10];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}Stu;//�ֺŲ��ܶ���
//struct Point
//{
//	int x;
//	int y;//�����ṹ��Ա��������
//}p1;//ͬʱ�ֶ������p1��
//
//struct Point p2//����ṹ�����p2
//
//	struct Point p3 = { x,y };	//��ʼ�������������ͬʱ����ʼֵ��
//	
//struct Stu//           �ṹ����������
//{
//	char name[15];//����
//	int age;//����
//};
//struct Stu s = { "zhangsan",20 };//��ʼ��
//struct Point
//	{
//		int x;
//		int y;//�����ṹ��Ա��������
//	}p1;//ͬʱ�ֶ������p1��
//struct Node
//{
//	int date;
//	struct Point p;
//	struct Node* next;
//}n1={10,{4,5},NULL};             //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20,{5,6},NULL };
//
//int main()
//{
//	struct S s;
//	strcpy(s.name, "zhangsan");//ʹ��.����name��Ա��
//	s.age = 20;//ʹ��.����age��Ա
//	return 0;
//}
//struct Stu
//{
//	char name[10];
//	int age;
//};
//void print(struct Stu* ps)//print�������սṹ���ַ������Ϊps
//{
//	printf("name=%s   age=%d\n", (*ps).name, (*ps).age);//���ý����ò�����������ָ��
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name=%s   age=%d\n", ps->name, ps->age);//->�ص�
//}
//int main()
//{ 
//	struct Stu s = { "zhangsan",20 };
//	print(&s);//�ṹ���ַ���Σ��ѽṹ��s�ĵ�ַ����ȥ
//	return 0;
//}

//struct Stu
//{
//	int id[1000];//�����ṹ��
//	int age;
//};
//struct Stu s = { {220503430},20 };//�ṹ���ʼ��
////�ṹ�崫��
//void print1(struct Stu s)
//{
//	printf("%d\n", s.age);
//}
////�ṹ���ַ����
//void print2(struct Stu* ps)
//{
//	printf("%d\n", (*ps).age);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	print1(s);//���ṹ��
//	print2(&s);//���ṹ���ַ
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