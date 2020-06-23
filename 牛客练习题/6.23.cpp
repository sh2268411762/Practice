////#include <stdio.h>
////
////int main()
////{
////	//int** pp;
////	//int* p;
////	//int a = 10, b = 20;
////	//pp = &p;
////	//p = &a;
////	//p = &b;
////	//printf("%d,%d", *p, **pp);
////
////
////	int a[][2] = { 2,3,1,4 };
////	return 0;
////}
//
//
//#include <iostream>
//using namespace std;
//
//
//class Sample {
//public:
//	Sample(int x)
//	{
//		p = new int(x);
//	}
//	~Sample() {
//		if (p) delete p;
//	}
//	int show() {
//		return *p;
//	}
//private :
//	int* p;
//};
//
//int main()
//{
//	Sample S(5);
//	cout << S.show() << endl;
//}