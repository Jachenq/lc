#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include<conio.h>
int test(int number)
{
	int counter = 0;
	int answer = 0;
	int x = 0;
	int result = 0;
	int m = 0;
	int n = 0;
	int k=0;
	char op;
	char op1;

	while (number--)   
	{
		m = rand() % 10;
		n = rand() % 10;
		k = rand() % 10;
		op = rand() % 4;
		op1 = rand() % 4;

		switch (op)
		{
		case 0:
			op = '+';
			x = m + n;
			switch (op1)
			{
			case 0:
				op1='+';
				answer=x+k;
				break;
			case 1:
				op1='-';
				answer=x-k;
				break;
			case 2:
				op1='*';
				answer=x*k;
				break;
			case 3:
				op1='/';
				answer=x/k;
				break;}
			break;
		case 1:
			op = '-';
			x = m - n;
				switch (op1)
			{
			case 0:
				op1='+';
				answer=x+k;
				break;
			case 1:
				op1='-';
				answer=x-k;
				break;
			case 2:
				op1='*';
				answer=x*k;
				break;
			case 3:
				op1='/';
				answer=x/k;
				break;}
			break;
		case 2:
			op = '*';
			x = m*n;
				switch (op1)
			{
			case 0:
				op1='+';
				answer=x+k;
				break;
			case 1:
				op1='-';
				answer=x-k;
				break;
			case 2:
				op1='*';
				answer=x*k;
				break;
			case 3:
				op1='/';
				answer=x/k;
				break;}
			break;
		case 3:
			++n;
			op = '/';
			x = m / n;
				switch (op1)
			{
			case 0:
				op1='+';
				answer=x+k;
				break;
			case 1:
				op1='-';
				answer=x-k;
				break;
			case 2:
				op1='*';
				answer=x*k;
				break;
			case 3:
				op1='/';
				answer=x/k;
				break;}
			break;
		default:
			break;
		}

		printf("题目：");
		printf("%d %c %d = ", m, op, n,k,x);
		while (scanf("%d", &result) != 1)
			fflush(stdin);
		if (answer == result)
			++counter;
	}

	return counter;
}

int main()
{
	int number;
	srand(time(NULL));

	printf("开始做题\n");
	printf("请输入题目数：");
	while (scanf("%d", &number) != 1)
		fflush(stdin);
	printf("答题结束，总共答对%d道题目\n", test(number));
	return 0;

//	_getch();
}