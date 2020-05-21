//#include <stdio.h>
////#include <math.h>
////#include <iostream>
////using namespace std;
////
////class Point
////{
////	friend double Distance(const Point& p1, const Point& p2)// 1
////	{
////		double dx = p1.x_ - p2.x_;
////		double dy = p1.y_ - p2.y_;
////		return(sqrt(dx * dx + dy * dy));
////	}
////
////public:
////	Point(int x, int y) :x_(x), y_(y)//2
////	{
////
////	}
////
////private:
////	int x_;
////	int y_;
////};
////
////int main()
////{
////	Point p1(3, 4);
////	Point p2(6, 9);
////
////	cout << Distance(p1, p2) << endl;//3
////
////	return(0);
////}
//
//
//int main()
//{
//	char x = 064;
//	int y = 0x333;
//	char z = 0x33;
//	int a = 0333;
//	char b = 0333;
//	printf("%d\n", ~x ^ x << 2 & x);
//	printf("%c\n", ~x ^ x << 2 & x);
//
//	return 0;
//}
//
//
//
////int main()
////{
////	//int i = 4;
////	//int j = i++ + 1;
////	//printf("i = %d  j = %d\n", i, j);
////
////
////	//char s1[40] = "country", s2[20] = "side";
////	//int i = 0;
////	//int j = 0;
////	//while (s1[i] != '\0')
////	//{
////	//	i++;
////	//}
////	//while (s2[j] != '\0')
////	//{
////	//	s1[i++] = s2[j++];
////	//}
////	//s1[i] = 0;
////	//printf("%s\n", s1);
////
////
////	//int a[4][10] = { {0,1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18,19},{20,21,22,23,24,25,26,27,28,29},{30,31,32,33,34,35,36,37,38,39} };
////	//int i = 2;//行
////	//int j = 3;//列
////	//printf("%d\n", *(a + i) + j);
////	//printf("%d\n", *(&a[0][0] + 10 * i + j));
////	//printf("%d\n", *(a[i] + j));
////	//printf("%d\n", *(*(a + i) + j));
////
////
////	//int a[] = { 0,1,2,3,4,5,6,7,8,9 };
////	//int* p = a;// p是指向 a 的指针
////	//int i;//（0 <= i <= 9）
////
////
////	//int a = 10;
////	//(a++) += a;
////	//(++a) += (a++);
////	return 0;
////}