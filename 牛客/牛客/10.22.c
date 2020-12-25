//#include<stdio.h>  
//#include<math.h>
//void main()
//{
//    float Result(float m); 
//    float a = 1, b = 2, mid, result, min, max;
//    do
//    {
//        min = a, max = b;
//        mid = (float)(a + b) / (float)2.0;
//        if (Result(a) * Result(mid) < 0) b = mid;
//        else a = mid;      
//        printf("%f,%f\n", a, b);
//    } while (fabs(max - min) > 0.001);
//    printf("\n结果为：%f\n", (a + b) / 2);
//}
//float Result(float m)//函数表达式  
//{
//    return (m * m - m - 1);
//}


//#include<stdio.h>  
//#include<math.h>  
//int main()
//{
//    double x0, x1, f, fd;
//    (void)scanf("%lf", &x1);
//    do {
//        x0 = x1;
//        f = x0 * x0 * x0 - 3 * x0 - 1;
//        fd = 3 * x0 * x0 - 3;
//        x1 = x0 - f / fd;
//
//    } while (fabs(x0 - x1) >= 1e-6);
//    printf("%.6f", x1);
//    return 0;
//}





//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#define N 3
//
//void printfnum(double a[N][N], double b[N])//显示
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			printf("%f,", a[i][j]);
//		}
//		printf("%f\n", b[i]);
//	}
//}
//
//void printfresult(double x[N])
//{
//	for (int i = 0; i < N; i++)
//	{
//		printf("x[%d]=%f\n", i, x[i]);
//	}
//}
//
//void main()
//{
//	double a[N][N] = { {0.101,2.304,3.555},{-1.347,3712,4.623},{-2.835,1.072,5.643} };
//	double b[N] = { 1.183,2.137,3.035 };
//	double t = 0, num1 = 0, num2 = 0, m = 0, n, x[N] = { 0,0,0 };
////	printf("初始值：\n"); printfnum(a, b);
//	for (int j = 0; j < N; j++)
//	{
//		t = fabs(a[j][j]);
//		m = j;
//		int i;
//		for (i = j; i < N; i++)//列主元素
//		{
//			if (fabs(a[i][j]) > t)//交换两行
//			{
//				t = fabs(a[i][j]);
//				for (int y = 0; y < N; y++)
//				{
//					num1 = a[j][y];
//					a[j][y] = a[i][y];
//					a[i][y] = num1;
//				}
//				num2 = b[j];
//				b[j] = b[i];
//				b[i] = num2;
//			}
//		}
////		printf("列主元素：\n");
////		printfnum(a, b);
//		for (i = j; i > 0; i--)//消元过程
//		{
//			for (int k = 0; k < i; k++)
//			{
//				m = a[i][k] / a[k][k];//k是已经进行了几次消元；
//				for (int y = 0; y < N; y++)
//				{
//					a[i][y] -= m * a[k][y];
//				}
//				b[i] -= m * b[k];
//			}
//		}
////		printf("消元：\n");
////		printfnum(a, b);
//	}
////	printf("列主消元完毕：\n");
////	printfnum(a, b);
//	x[N - 1] = b[N - 1] / a[N - 1][N - 1];
//	for (int i = N - 2; i >= 0; i--)//回代过程
//	{
//		n = 0;
//		for (int j = i + 1; j < N; j++)
//		{
//			n += a[i][j] * x[j];
////			printf("%f222", n);
//		}
//		x[i] = (b[i] - n) / a[i][i];
//	}
//	printf("\n结果：\n");
//	printfresult(x);
//}




//#include<stdio.h>
//#define max 4
//void main()
//{
//	int i, j, k, sum, L[max][max] = { 0 }, U[max][max] = { 0 },
//		A[max][max] = { 1,2,-12,8,5,4,7,-2,-3,7,9,5,6,-12,-8,3 },
//		Y[max], X[max], Result[max] = { 27,4,11,49 };
//	//求U第一行与L第一列
//	for (j = 0; j < 4; j++) U[0][j] = A[0][j];
//	for (i = 1; i < 4; i++) L[i][0] = A[i][0] / U[0][0];
//	for (i = 0; i < 4; i++) L[i][i] = 1;//对L的主对角线的赋值
//	for (i = 1; i < 4; i++)
//		for (j = i; j < 4; j++)
//		{
//			//求U的其它行与列
//			sum = 0;
//			for (k = 0; k <= i - 1; k++)
//				sum += L[i][k] * U[k][j];
//			U[i][j] = A[i][j] - sum;
//			//求L的其他行与列
//			sum = 0;
//			for (k = 0; k <= i - 1; k++)
//				sum += L[j][k] * U[k][i];
//			L[j][i] = (A[j][i] - sum) / U[i][i];
//		}
//	//数值的输出
//	printf("A的二维数组为：\n");//A数组输出
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", A[i][j]);
//		printf("\n");
//	}
//	printf("L的二维数组为：\n");//L数组输出
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", L[i][j]);
//		printf("\n");
//	}
//	printf("U的二维数组为：\n");//U数组输出
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", U[i][j]);
//		printf("\n");
//	}
//	//求解y1,y2,y3,y4
//	Y[0] = Result[0] / L[0][0];//求解Y[0]
//	for (i = 1; i < 4; i++)
//	{
//		sum = 0;
//		for (j = 0; j < i; j++)
//			sum += L[i][j] * Y[j];
//		Y[i] = (Result[i] - sum) / L[i][i];
//	}
//	//函数原始对应的值
//	for (i = 0; i < 4; i++)
//		printf("函数所对应的值为：%d\n", Result[i]);
//	//数组Y的值
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("Y%d的值为：%d\n", i + 1, Y[i]);
//	//求解x1,x2,x3,x4
//	X[3] = Y[3] / U[3][3];//求解X[0]
//	for (i = 2; i >= 0; i--)
//	{
//		sum = 0;
//		for (j = 3; j > i; j--)
//			sum += U[i][j] * X[j];
//		X[i] = (Y[i] - sum) / U[i][i];
//	}
//	//输出x1,x2,x3,x4
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("X%d的值为：%d\n", i + 1, X[i]);
//}


//# include<stdio.h>
//# include<math.h>
//# define N 6
//
///*
//*使用雅可比迭代法和高斯-赛德尔迭代法 求解线性方程组
//*/
//main() {
//	float NF2(float* x, float* y);
//	float A[N][N], b[N], sum = 0;
//	float x[N], y[N] = { 0 }, x0[N];
//	int i, j, n = 0;
//
//	//输入系数矩阵 
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			scanf("%f", &A[i][j]);
//		}
//	}
//
//	//输入常数矩阵
//	for (i = 0; i < N; i++) {
//		scanf("%f", &b[i]);
//	}
//
//	//输入解的初值
//	for (i = 0; i < N; i++) {
//		scanf("%f", &x0[i]);
//	}
//
//	//输出系数矩阵
//	printf("输出该方程组的系数矩阵：\n");
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			printf("%3.1f    ", A[i][j]);
//		}
//		printf("\n");
//	}
//
//	//输出成数矩阵
//	printf("输出该方程组的常数矩阵：\n");
//	for (i = 0; i < N; i++) {
//		printf("%3.1f\n", b[i]);
//	}
//
//	//输出解的迭代初值
//	printf("解该方程组的的迭代初值是：\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%3.1f\n", x0[i]);
//	}
//	/*
//	*利用雅可比迭代法求解线性方程组
//	*/
//	for (i = 0; i < N; i++)
//	{
//		x[i] = x0[i];
//	}
//	for (n = 0;; n++) {
//		//计算下一个值 
//		for (i = 0; i < N; i++) {
//			sum = 0;
//			for (j = 0; j < N; j++) {
//				if (j != i) {
//					sum = sum + A[i][j] * x[j];
//				}
//			}
//			y[i] = (1 / A[i][i]) * (b[i] - sum);
//			//sum=0;
//		}
//		//判断误差大小 
//		if (NF2(x, y) > 0.01) {
//			for (i = 0; i < N; i++) {
//				x[i] = y[i];
//			}
//		}
//		else
//			break;
//	}
//	printf("经过%d次雅可比迭代解出方程组的解：\n", n + 1);
//	for (i = 0; i < N; i++) {
//		printf("%f      ", y[i]);
//	}
//	/*
//	*利用高斯-赛德尔迭代法求解线性方程组
//	*/
//	for (i = 0; i < N; i++)
//	{
//		x[i] = x0[i];
//		y[i] = 0;
//	}
//	for (n = 0;; n++) {
//		//计算下一个值 
//		for (i = 0; i < N; i++) {
//			sum = 0;
//			for (j = 0; j < i; j++) {
//				sum = sum + A[i][j] * y[j];
//			}
//			for (j = i + 1; j < N; j++) {
//				sum = sum + A[i][j] * x[j];
//			}
//			y[i] = (1 / A[i][i]) * (b[i] - sum);
//			//sum=0;
//		}
//		//判断误差大小 
//		if (NF2(x, y) > 0.01) {
//			for (i = 0; i < N; i++) {
//				x[i] = y[i];
//			}
//		}
//		else
//			break;
//	}
//	printf("\n经过%d次高斯-赛德尔迭代解出方程组的解：\n", n + 1);
//	for (i = 0; i < N; i++) {
//		printf("%f      ", y[i]);
//	}
//}
////求两个向量差的二范数函数 
//float NF2(float* x, float* y) {
//	int i;
//	float z, sum1 = 0;
//	for (i = 0; i < N; i++) {
//		sum1 = sum1 + pow(y[i] - x[i], 2);
//	}
//	z = sqrt(sum1);
//	return z;
//}
