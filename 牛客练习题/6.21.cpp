////#include <stdio.h>
////#include <stdlib.h>
//
//
//
//
//
////int main()
////{
////	int num = 0;
////	while (num <= 2)
////	{
////		num++;
////		printf("%d ", num);
////	}
////	return 0;
////}
//
////struct STU
////{
////	char num[10];
////	float s[3];
////};
////
////void main()
////{
////	struct STU s[3] = { {"20021",90,95,85},{"20022",95,80,75},{"20023",100,95,90} };
////	struct STU * p = s;
////	int i;
////	float sum = 0;
////	for (i = 0; i < 3; i++)
////	{
////		sum = sum + p->s[i];
////	}
////	printf("%6.2f\n", sum);
////
////}
//
//
//#include <iostream>
//using namespace std;
//
////void main()
////{
////	int n[][3] = { 10,20,30,40,50,60 };
////	int(*p)[3];
////	p = n;
////	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
////	//10 
////}
//
//class A
//{
//public:
//	A()
//	{
//		printf("A");
//	}
//};
//
//int main()
//{
//	A* p1 = new A;
//	A* p2 = (A*)malloc(sizeof(A));
//
//	return 0;
//}