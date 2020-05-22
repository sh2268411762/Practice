//#include <stdio.h>
//
//char* getMem(void) {
//	char p[] = "hello world ";
//	p[5] = 0x0;
//	return p;
//}
//void test(void) {
//	char* s = 0x0;
//	s = getMem();
//	printf(s);
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//
//
//
////struct A {
////	unsigned int a;//4
////	char b[2];//2
////	double c;//8
////	short d;//2
////};
////int main()
////{
////	//typedef int* T;
////	//T a[10];
////	printf("%d  %d", sizeof(unsigned int), sizeof(short));
////	printf("%d", sizeof(struct A));
////	return 0;
////}
//
//
//
////#include <iostream>
////using namespace std;
//
////int main()
////{
////	//int i = 3;
////	//int* p;
////	//p = &i;
////	//printf("%d\n", *p);
////	//cout << *p;
////
////
////	//double* p;
////	//double x[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	//int i = 5;
////	//p = &x[i];
////	////p = &(x + i);
////	//printf("%lf", *p);
////
////
////
////	return 0;
////}