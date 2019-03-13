/*
 * Workspace.c
 *
 *  Created on: Mar 12, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	int row;
	int col;

	printf("Enter the number of rows for the table: ");
	fflush(stdout);
	scanf("%d",&row);
	printf("Enter the number of columns for the table: ");
	fflush(stdout);
	scanf("%d",&col);
	printf("     ");
	for(int i = 1; i<col+1; i++)
	{
		printf("%d   ",i);
	}
	printf("\n +");
	for(int i = 0; i<col; i++)
	{
		printf("----");
	}
	for(int j = 1; j<row+1; j++)
	{
		printf("\n%d|   ",j);
		for(int k = 1; k<col+1; k++)
		{
			int result = j*k;
			int next = (j+1)*(k*1);
			if(next%10>=10)
				printf("%d  ",result);
			else if(next%10>=1)
				printf("%d   ",result);
			else
				printf("%d    ",result);
		}
	}
	return 0;
}





