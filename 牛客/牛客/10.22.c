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
//    printf("\n���Ϊ��%f\n", (a + b) / 2);
//}
//float Result(float m)//�������ʽ  
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
//void printfnum(double a[N][N], double b[N])//��ʾ
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
////	printf("��ʼֵ��\n"); printfnum(a, b);
//	for (int j = 0; j < N; j++)
//	{
//		t = fabs(a[j][j]);
//		m = j;
//		int i;
//		for (i = j; i < N; i++)//����Ԫ��
//		{
//			if (fabs(a[i][j]) > t)//��������
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
////		printf("����Ԫ�أ�\n");
////		printfnum(a, b);
//		for (i = j; i > 0; i--)//��Ԫ����
//		{
//			for (int k = 0; k < i; k++)
//			{
//				m = a[i][k] / a[k][k];//k���Ѿ������˼�����Ԫ��
//				for (int y = 0; y < N; y++)
//				{
//					a[i][y] -= m * a[k][y];
//				}
//				b[i] -= m * b[k];
//			}
//		}
////		printf("��Ԫ��\n");
////		printfnum(a, b);
//	}
////	printf("������Ԫ��ϣ�\n");
////	printfnum(a, b);
//	x[N - 1] = b[N - 1] / a[N - 1][N - 1];
//	for (int i = N - 2; i >= 0; i--)//�ش�����
//	{
//		n = 0;
//		for (int j = i + 1; j < N; j++)
//		{
//			n += a[i][j] * x[j];
////			printf("%f222", n);
//		}
//		x[i] = (b[i] - n) / a[i][i];
//	}
//	printf("\n�����\n");
//	printfresult(x);
//}




//#include<stdio.h>
//#define max 4
//void main()
//{
//	int i, j, k, sum, L[max][max] = { 0 }, U[max][max] = { 0 },
//		A[max][max] = { 1,2,-12,8,5,4,7,-2,-3,7,9,5,6,-12,-8,3 },
//		Y[max], X[max], Result[max] = { 27,4,11,49 };
//	//��U��һ����L��һ��
//	for (j = 0; j < 4; j++) U[0][j] = A[0][j];
//	for (i = 1; i < 4; i++) L[i][0] = A[i][0] / U[0][0];
//	for (i = 0; i < 4; i++) L[i][i] = 1;//��L�����Խ��ߵĸ�ֵ
//	for (i = 1; i < 4; i++)
//		for (j = i; j < 4; j++)
//		{
//			//��U������������
//			sum = 0;
//			for (k = 0; k <= i - 1; k++)
//				sum += L[i][k] * U[k][j];
//			U[i][j] = A[i][j] - sum;
//			//��L������������
//			sum = 0;
//			for (k = 0; k <= i - 1; k++)
//				sum += L[j][k] * U[k][i];
//			L[j][i] = (A[j][i] - sum) / U[i][i];
//		}
//	//��ֵ�����
//	printf("A�Ķ�ά����Ϊ��\n");//A�������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", A[i][j]);
//		printf("\n");
//	}
//	printf("L�Ķ�ά����Ϊ��\n");//L�������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", L[i][j]);
//		printf("\n");
//	}
//	printf("U�Ķ�ά����Ϊ��\n");//U�������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d\t", U[i][j]);
//		printf("\n");
//	}
//	//���y1,y2,y3,y4
//	Y[0] = Result[0] / L[0][0];//���Y[0]
//	for (i = 1; i < 4; i++)
//	{
//		sum = 0;
//		for (j = 0; j < i; j++)
//			sum += L[i][j] * Y[j];
//		Y[i] = (Result[i] - sum) / L[i][i];
//	}
//	//����ԭʼ��Ӧ��ֵ
//	for (i = 0; i < 4; i++)
//		printf("��������Ӧ��ֵΪ��%d\n", Result[i]);
//	//����Y��ֵ
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("Y%d��ֵΪ��%d\n", i + 1, Y[i]);
//	//���x1,x2,x3,x4
//	X[3] = Y[3] / U[3][3];//���X[0]
//	for (i = 2; i >= 0; i--)
//	{
//		sum = 0;
//		for (j = 3; j > i; j--)
//			sum += U[i][j] * X[j];
//		X[i] = (Y[i] - sum) / U[i][i];
//	}
//	//���x1,x2,x3,x4
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("X%d��ֵΪ��%d\n", i + 1, X[i]);
//}


//# include<stdio.h>
//# include<math.h>
//# define N 6
//
///*
//*ʹ���ſɱȵ������͸�˹-���¶������� ������Է�����
//*/
//main() {
//	float NF2(float* x, float* y);
//	float A[N][N], b[N], sum = 0;
//	float x[N], y[N] = { 0 }, x0[N];
//	int i, j, n = 0;
//
//	//����ϵ������ 
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			scanf("%f", &A[i][j]);
//		}
//	}
//
//	//���볣������
//	for (i = 0; i < N; i++) {
//		scanf("%f", &b[i]);
//	}
//
//	//�����ĳ�ֵ
//	for (i = 0; i < N; i++) {
//		scanf("%f", &x0[i]);
//	}
//
//	//���ϵ������
//	printf("����÷������ϵ������\n");
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++) {
//			printf("%3.1f    ", A[i][j]);
//		}
//		printf("\n");
//	}
//
//	//�����������
//	printf("����÷�����ĳ�������\n");
//	for (i = 0; i < N; i++) {
//		printf("%3.1f\n", b[i]);
//	}
//
//	//�����ĵ�����ֵ
//	printf("��÷�����ĵĵ�����ֵ�ǣ�\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("%3.1f\n", x0[i]);
//	}
//	/*
//	*�����ſɱȵ�����������Է�����
//	*/
//	for (i = 0; i < N; i++)
//	{
//		x[i] = x0[i];
//	}
//	for (n = 0;; n++) {
//		//������һ��ֵ 
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
//		//�ж�����С 
//		if (NF2(x, y) > 0.01) {
//			for (i = 0; i < N; i++) {
//				x[i] = y[i];
//			}
//		}
//		else
//			break;
//	}
//	printf("����%d���ſɱȵ������������Ľ⣺\n", n + 1);
//	for (i = 0; i < N; i++) {
//		printf("%f      ", y[i]);
//	}
//	/*
//	*���ø�˹-���¶�������������Է�����
//	*/
//	for (i = 0; i < N; i++)
//	{
//		x[i] = x0[i];
//		y[i] = 0;
//	}
//	for (n = 0;; n++) {
//		//������һ��ֵ 
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
//		//�ж�����С 
//		if (NF2(x, y) > 0.01) {
//			for (i = 0; i < N; i++) {
//				x[i] = y[i];
//			}
//		}
//		else
//			break;
//	}
//	printf("\n����%d�θ�˹-���¶��������������Ľ⣺\n", n + 1);
//	for (i = 0; i < N; i++) {
//		printf("%f      ", y[i]);
//	}
//}
////������������Ķ��������� 
//float NF2(float* x, float* y) {
//	int i;
//	float z, sum1 = 0;
//	for (i = 0; i < N; i++) {
//		sum1 = sum1 + pow(y[i] - x[i], 2);
//	}
//	z = sqrt(sum1);
//	return z;
//}
