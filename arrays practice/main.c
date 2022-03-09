#include <stdio.h>
#define SIZE_Q1 7
#define SIZE_Q2 3
#define ROWS_Q3 5
#define COLUMNS_Q3 3
#define SIZE_Q4 7
#define SIZE_Q5 5
#define SIZE2_Q5 8
#define ROWS_Q6 3
#define COLUMNS_Q6 4


int main()
{
	//Question 1- Power array.

	int powerArry[SIZE_Q1],i;
	for ( i = 0;  i < SIZE_Q1; i++)
		powerArry[i] = i * i;
	printf("power arry={");
	for (i = 0; i < SIZE_Q1-1; i++)
		printf("%d,", powerArry[i]);
	printf("%d}\n", powerArry[SIZE_Q1 - 1]);

	//Question 2-Two array of integers that include ID numbers.
	//Write a program that finds the ID numbers that appear in both sets.
	//Add code to the program that will initialize both arrays using user input.

	int idArray1[SIZE_Q2], idArray2[SIZE_Q2],j;
	printf("Enter nin-digit ID numbers to the first group:\n");
	for ( i = 0; i < SIZE_Q2; i++)
		scanf_s("%d", &idArray1[i]);
	printf("Enter nin-digit ID numbers to the second group:\n");
	for (i = 0; i < SIZE_Q2; i++)
		scanf_s("%d", &idArray2[i]);
	for ( i = 0; i < SIZE_Q2; i++)
		for ( j = 0; j < SIZE_Q2; j++)
			if (idArray1[i]==idArray2[j])
				printf("The ID number is in both groups : %d\n",idArray1[i]);
	//Question 3-Find all rows and columns average 
	int matrix[ROWS_Q3][COLUMNS_Q3];
	float average = 0;
	printf("Enter matrix number:\n");
	for ( i = 0; i < ROWS_Q3; i++)
		for ( j = 0; j < COLUMNS_Q3; j++)
			scanf_s("%d", &matrix[i][j]);
	for (i = 0; i < ROWS_Q3; i++)
	{
		for (j = 0; j < COLUMNS_Q3; j++)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}
	for (i = 0; i < ROWS_Q3; i++)
	{
		for (j = 0; j < COLUMNS_Q3; j++)
			average += matrix[i][j];
		printf("The average for row %d: %.2f\n",  i + 1,average/COLUMNS_Q3);
		average = 0;
	}
	average = 0;
	for (j = 0; j < COLUMNS_Q3; j++)
	{
		for (i = 0; i < ROWS_Q3; i++)
			average += matrix[i][j];
		printf("The average for column %d : %.2f\n", j + 1,average/ROWS_Q3);
		average = 0;
	}
	//Question 4-flindrum or not
	int left, right, flindrumArray[SIZE_Q4];
	printf("Enter array numbers :\n");
	for ( i = 0; i < SIZE_Q4; i++)
		scanf_s("%d", &flindrumArray[i]);
	
	for (left = 0, right = SIZE_Q4 - 1; left <= right;left++,right-- )
	{
		if (flindrumArray[left] != flindrumArray[right])
		{
			printf("The array is'nt flindrum\n");
			break;
		}
	}
	if (left > right)
		printf("The array is flindrum\n");
	//Question 5-print only if the number only in one of the arrays. 
	int	array1[SIZE_Q5], array2[SIZE2_Q5],temp=0;
	printf("Enter first array numbers :\n");
	for (i = 0; i < SIZE_Q5; i++)
		scanf_s("%d", &array1[i]);
	printf("Enter second array numbers :\n");
	for (i = 0; i < SIZE2_Q5; i++)
		scanf_s("%d", &array2[i]);
	printf("The numbers that are only in one of the arrays :\n");
	for ( i = 0; i < SIZE_Q5; i++)
	{
		for ( j = 0; j < SIZE2_Q5; j++)
		{
			if (array1[i]==array2[j])
				temp++;
			if (temp == 1)
				break;
		}
		if (temp==0)
			printf("%d\n",array1 [i]);
		temp = 0;
	}
	for (i = 0; i < SIZE2_Q5; i++)
	{
		for (j = 0; j < SIZE_Q5; j++)
		{
			if (array2[i] == array1[j])
				temp++;
			if (temp == 1)
				break;
		}
		if (temp == 0)
			printf("%d\n", array2[i]);
		temp = 0;
	}
	//Question 6-Find all rows and columns average,max,min.
	int matrix1[ROWS_Q6][COLUMNS_Q6], max, min;
	float average1 = 0;
	printf("Enter matrix number:\n");
	for ( i = 0; i < ROWS_Q6; i++)
		for ( j = 0; j < COLUMNS_Q6; j++)
			scanf_s("%d", &matrix1[i][j]);
	for (i = 0; i < ROWS_Q6; i++)
	{
		for (j = 0; j < COLUMNS_Q6; j++)
			printf("%d\t", matrix1[i][j]);
		printf("\n");
	}
	for (i = 0; i < ROWS_Q6; i++)
	{
		max = min = matrix1[i][0];
		for (j = 0; j < COLUMNS_Q6; j++)
		{
			average1 += matrix1[i][j];
			if (matrix1[i][j]>max)
				max = matrix1[i][j];
			if (matrix1[i][j] < min)
				min = matrix1[i][j];
		}
		printf("The average for row %d: %.2f, the max number for row %d: %d, the min number for row %d: %d.\n", i + 1, average1 / COLUMNS_Q6,i+1,max,i+1,min);
		average1 = 0;
	}
	average1 = 0;
	for (j = 0; j < COLUMNS_Q6; j++)
	{
		max = min = matrix1[0][j];
		for (i = 0; i < ROWS_Q6; i++)
		{
			average1 += matrix1[i][j];
			if (matrix1[i][j] > max)
				max = matrix1[i][j];
			if (matrix1[i][j] < min)
				min = matrix1[i][j];
		}
			printf("The average for columns %d: %.2f, the max number for columns %d: %d, the min number for columns %d: %d.\n", j + 1, average1 / ROWS_Q6,j+1,max,j+1,min);
			average1 =  0;
	}
	return 0;
}