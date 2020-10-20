//#include <iostream>
//using namespace std;
//
//
//
////交换整数
//int main()
//{
//	int a, b;
//	(void)scanf("%d,%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << "a=" << a << ",b=" << b;
//	return 0;
//}

////输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//int main()
//{
//	int year, month, date;
//	(void)scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%.2d\ndate=%.2d", year, month, date);
//	return 0;
//}


////73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
////转换输出题目中给出的所有ASCII到对应的字符。
//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	char c = 0;
//	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		c = arr[i];
//		cout << c;
//	}
//	return 0;
//}

////输入一个字符，用它构造一个三角形金字塔。
//int main()
//{
//	char c = 0;
//	cin >> c;
//	int n = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5 - i - 1; j++)
//		{
//			cout << " ";
//		}
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == i)
//			{
//				cout << c;
//			}
//			else
//			{
//				cout << c << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <stdio.h>
////依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
////在屏幕上输出该学生的学号，3科成绩。
////给一个浮点数加1e-8即四舍五入
//int main()
//{
//	int str;
//	double c, m, e;
//	(void)scanf("%d;%lf,%lf,%lf", &str, &c, &m, &e);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", str, c + 1e-8, m + 1e-8, e + 1e-8);
//	return 0;
//}
