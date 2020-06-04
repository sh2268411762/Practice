////#include <iostream>
////using namespace std;
////
////
////long fun(int n)
////{
////	if (n > 2)
////	{
////		return (fun(n - 1) + fun(n - 2));
////	}
////	else
////	{
////		return (n);
////	}
////}
////
////int main()
////{
////	int i;
////	cout << "ui";
////	cin >> i;
////	cout << endl;
////	cout << fun(i) << endl;
////}
//
//
//#include <stdio.h>
//
//
//void incre()
//{
//	static int x = 1;
//	x *= x + 1;
//	printf("%d", x);
//}
//int x = 3;
//int main()
//{
//	//FILE* fp;
//	//int i, a[6] = { 1,2,3,4,5,6 };
//	//fp = fopen("d2.dat", "w+");
//	//for (i = 0;i<6;i++)
//	//{
//	//	fprintf(fp, "%d\n", a[i]);
//	//}
//	//for (i = 0; i < 6; i++)
//	//{
//	//	fscanf(fp, "%d", &a[5 - i]);
//	//}
//	//fclose(fp);
//	//for (i = 0; i < 6; i++)
//	//{
//	//	printf("%d,", a[i]);
//	//}
//
//
//	//const int N = 10;
//	//const int M = 2;
//	//int* a = new int[N];
//	//for (int i = 0; i < N; i++)
//	//{
//	//	a[i] = (0 == i % 2) ? (i + 2) : (i + 0);
//	//}
//	//int(*b)[N / M] = (int(*)[N / M])a;
//	//for (int i = 0; i < M; i++)
//	//{
//	//	for (int j = 0; j < N / M; j++)
//	//	{
//	//		printf("%d", b[i][j]);
//	//	}
//	//}
//
//
//
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		incre();
//	}
//
//	return 0;
//}
