#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task6()
{

}

void task5()
{
	const int n = 5;
	int min;

	int A[n][n] = { 0 };

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = 0 + rand()% 100;
			printf("A[%d][%d] = %d   ", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < n; i++)
	{
		min = 100;
		for (size_t j = 0; j < n; j++)
		{
			if (min>A[i][j])
			{
				min = A[i][j];
			}

		}
		printf("\nMin = %d\n", min);

		for (size_t j = 0; j < n; j++)
		{
			if (min == A[i][i])
			{
				for (size_t q = 0; q < n; q++)
				{
					A[i][q] = 0;
				}

			}

		}
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			printf("A[%d][%d] = %d  ", i, j, A[i][j]);
		}
		printf("\n");
	}
}

void task4()
{
	const int n = 5, m = 5;
	int A[n][m] = { 0 };

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d  ", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m-1; j++)
		{
			if (A[i][j] == A[i][j+1])
			{
				A[i][j] = 0;
				A[i][j + 1] = 0;
			}
		}

	}

	printf("\n\n\n\n\n");

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{

			printf("A[%d][%d] = %d  ", i, j, A[i][j]);
		}
		printf("\n");
	}
}

void task3()
{
	const int n = 6;
	int A[n][n] = { 0 }, neg = 0, flag = 1, x, y, o = 0;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = -5 + rand() % 15;
			printf("A[%d][%d] = %d  ", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (A[i][j] < 0)
			{
				printf("\nA[%d][%d] = %d\n", i, j, A[i][j]);

				neg++;
				
				if (neg == 2 )
				{
					flag = 0;
					x = i;
					y = j;
				}

			}
			if (flag == 0)
			{
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	for (size_t i = x; i < n; i++)
	{
		if (o == 0)
		{


			for (size_t p = 0; p < 1; p++)
			{
				for (size_t q = y; q < n; q++)
				{
					printf("A[%d][%d] = %d  ", i, q, A[i][q]);
				}
				printf("\n");
			}

			o++;
			
			for (size_t b = x+1; b < n; b++)
			{
				for (size_t j = 0; j < n; j++)
				{
					printf("A[%d][%d] = %d  ", b, j, A[b][j]);
				}
				printf("\n");
			}
		}
	}
	printf("\n\n\n\n\n");

	for (size_t k = 0; k < n; k++)
	{
		for (size_t r = 0; r < n; r++)
		{
			for (size_t i = 0; i < n; i++)
			{
				for (size_t j = 0; j < n; j++)
				{
					if (A[i][j]>A[k][r])
					{
					
					int Temp = A[i][j];
					A[i][j] = A[k][r];
					A[k][r] = Temp;
				}
				}

			}

		}

	}

	for (size_t b = 0; b < n; b++)
	{
		for (size_t j = 0; j < n; j++)
		{
			printf("A[%d][%d] = %d  ", b, j, A[b][j]);
		}
		printf("\n");
	}
}

void task2()
{
	const int n = 5, m = 10;
	int A[n][m] = { 0 }, sum = 10, x = 1000;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d   ", i, j, A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < n; i++)
	{
		sum = 0;

		for (size_t j = 0; j < m; j++)
		{
			sum = sum + A[i][j];
		}
		if (sum < x)
		{
			x = sum;
		}
	}

	printf("Min sum = %d\n", x);
}

void task1()
{
	const int n = 5;
	int pro = 1;

	int A[n][n] = { 0 };

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("A[%d][%d] = %d\t", i, j, A[i][j]);

		}
		printf("\n");
	}

	for (size_t i = 0; i < n; i++)
	{
		pro = pro * A[0][i];

	}
	printf("\npro = %d\n", pro);
}


void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}