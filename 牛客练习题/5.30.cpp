////#include <stdio.h>
////
////
////
////#define F(x,y) (x)--,(y)++,(x)*(y)
////struct S
////{
////	int a;
////	int b;
////};
////int m(unsigned int n)
////{
////	int m = n == 0 ? 0 : 1;
////	while (n = (n & (n - 1)))
////	{
////		m++;
////	}
////	return m;
////}
////
////fun(int a, int b, int c)
////{
////	c = a * b;
////}
////int main()
////{
////	//int a = 1, b = 2, c = 3;
////	//if (a > c)
////	//	b = a;
////	//	a = c;
////	//	c = b;
////	//printf("%d", c);
////
////
////	//struct S a, * p = &a;
////	//a.a = 99;
////	//printf("%d\n", a.a);
////	//printf("%d\n", p->a);
////	//printf("%d\n", (*p).a);
////
////
////	//int i, a = 3, b = 4;
////	//for (i = 0; i < 5; i++)
////	//{
////	//	F(a, b);
////	//}
////	//printf("%d  %d", a, b);
////
////
////	//int a = 1;
////	//int x = 1;
////	//while (a < 10)x++; a++;
////
////	//unsigned int a = 1;
////	//int ret = m(a);
////	//printf("%d  ", ret);
////
////
////	int c = 100;
////	fun(2, 3, c);
////	printf("%d\n", c);
////	return 0;
////}
//
//
//
//
//#include <stdio.h>
//
//class A
//{
//public:
//	A() { printf("A"); }
//	~A() { printf("~A"); };
//};
//class B :public A
//{
//public:
//	B() { printf("B"); }
//	~B() { printf("~B"); };
//};
//
//int main()
//{
//	A* c = new B[2];
//	delete[] c;
//
//	return 0;
//}
