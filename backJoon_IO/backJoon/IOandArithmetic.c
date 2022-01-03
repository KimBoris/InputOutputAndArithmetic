#include <stdio.h>

int main()
{
	//1000
	/*int a = 0;
	int b = 0;
	a > 0;
	b > 10;

	scanf_s("%d %d", &a, &b);
	printf("%d", a + b);*/


	//1001
	/*a = 0;
	b = 0;
	a > 0;
	b > 10;

	scanf_s("%d %d", &a, &b);
	printf("%d", a - b);
*/

//1002
//이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라고 명령을 내렸다.
//조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.
//조규현의 좌표(x1, y1)와 백승환의 좌표(x2, y2)가 주어지고, 조규현이 계산한 류재명과의 거리 r1과
//백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성해라

//입력 - 각 테스트 케이스마다 류재명이 있을 수 있는 위치의 수를 출력, 만약 류재명이 있을 수 있는 위치의
//개수가 무한대일 경우에는 -1 출력

	int x1, y1, x2, y2;
	unsigned int r1, r2;

	-10000 <= x1, y1, x2, y2;
	x1, y1, x2, y2 <= 10000;
	r1, r2 <= 10000;

	////////////////////////////////////////해결 예정/////////////////////////////////


	//1003
	int T;
	int N = 0;
	0 <= N < 40;
	////////////////////////////////////////해결 예정/////////////////////////////////




	//1004




	//10171

	//printf("\n");
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");
	printf("\n");


	//10172

	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )""\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|");


	//10998
	/*int A = 0;
	int B = 0;*/

	//scanf_s(" %d %d", &A, &B);
	//printf("%d", A * B);

	printf("\n");

	//1008
	/*double A = 0;
	double B = 0;

	scanf_s("%lf %lf", &A, &B);
	printf("%.9lf",A / B);
*/

//10869
//int A = 0;
//int B = 0;
//scanf_s("%d %d", &A, &B);
//printf("%d\n", A + B);
//printf("%d\n", A - B);
//printf("%d\n", A * B);
//printf("%d\n", A / B);
//printf("%d\n", A % B);


//10430
	//int A, B, C;
	//scanf_s("%d %d %d\n", &A, &B, &C);
	//printf("%d\n", (A + B) % C);
	//printf("%d\n", ((A % C) + (B % C)));
	//printf("%d\n", (A * B) % C);
	//printf("%d\n", ((A % C) * (B % C) % C));


	//2588
	int A, B;
	scanf_s("%d %d", &A, &B);
	int anw3 = A * (B % 10);
	int anw4 = A * ((B % 100) / 10);
	int anw5 = A * (B / 100);
	int anw6 = A * B;

	printf("%d\n", anw3);
	printf("%d\n", anw4);
	printf("%d\n", anw5);
	printf("%d\n", anw6);


	return 0;
}