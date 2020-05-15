//#include <stdio.h>
//#include <string.h>
//
//
//char* GetWelcome(void) {
//	char* pcWelcome;
//	char* pcNewWelcome;
//	pcWelcome = "Welcome to t";
//	pcNewWelcome = (char*)malloc(strlen(pcWelcome));//1
//	if (NULL == pcNewWelcome)
//	{
//		return NULL;//2
//	}
//	strcpy(pcNewWelcome, pcWelcome);//3
//	return pcNewWelcome;
//}
//int main()
//{
//	//char c1 = 'A';
//	//char c2 = 'D';
//	//printf("%d,%d\n", c1, c2 - 2);
//
//
//	//int x = -1;
//	//int c = 0;
//	//do {
//	//	x = x * x;
//	//	c++;
//	//} while (!x);
//	//printf("%d\n", c);
//
//
//
//	//int a[3][4] = { {3,4},{2,8,6} };
//	//int c = a[1][2];
//	//printf("%d\n", c);
//
//
//	//char* p[10];
//	//char(*p1)[10];
//	//printf("%d\n%d\n", sizeof(p), sizeof(p1));
//
//
//	//int x = 1;
//	//int y = ~x;
//	//printf("%d\n", y);
//
//
//	GetWelcome();
//	return 0;
//}