//#include <stdio.h>
//
//int f1(int x)
//{
//	return x + 5;
//}
//int f2(int x)
//{
//	return 2 * x - 1;
//}
//int fun(int a)
//{
//	int b = 0;
//	static int c = 3;
//
//	b++;
//	c++;
//
//	return (a + b + c);
//}
//int main()
//{
//	//int (*p1)(int);
//	//int (*p2)(int);
//	//int (*t)(int);
//	//int y1, y2;
//
//	//p1 = f1;
//	//p2 = f2;
//	//y1 = p2(p1(1));
//	//t = p1;
//	//p1 = p2;
//	//p2 = t;
//	//y2 = p2(p1(2));
//	//printf("%d,%d\n", y1, y2);
//
//
//	//int i = 0;
//	//for (; i < 3; i++)
//	//{
//	//	printf("%d", fun(2));
//	//}
//
//
//	//char s[6] = "abcd";
//	//printf("\"%s\"\n", s);
//
//
//	//int a = 10;
//	//(M) ? (a++) : (a--);
//
//	//printf("%d", a);
//
//
//	
//	return 0;
//}
//
//
//
//
////#include <iostream>
////using namespace std;
////
////class Base
////{
////public:
////	virtual int foo(int x)
////	{
////		return x + 10;
////	}
////
////	int foo(char x[14])
////	{
////		return sizeof(x) + 10;
////	}
////};
////
////class Derived :public Base
////{
////	int foo(int x)
////	{
////		return x * 20;
////	}
////	virtual int foo(char x[10])
////	{
////		return sizeof(x) + 20;
////	}
////};
////int main()
////{
////	Derived stDerived;
////	Base* pBase = &stDerived;
////
////	char x[10];
////	printf("%d\n", pBase->foo(100) + pBase->foo(x));
////	return 0;
////}