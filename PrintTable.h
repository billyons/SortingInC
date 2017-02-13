/* This header for CSE1320 homework 2 was written by William Lyons on 10/5/2015 */

#ifndef PRINT_TABLE_H
#define PRINT_TABLE_H

void printStudentTable(int array[NUM_STUDENTS][NUM_ATTRIBUTES]);

void printStudentTable(int array[NUM_STUDENTS][NUM_ATTRIBUTES])
{
	int count = 0;	

	printf("\n|Student Id | Student Age|\n");
	for(count = 0; count < 7; ++count)
	{
		printf("|________________________|\n");
		printf("|   %5d |      %2d      |\n",array[count][ID_INDEX],array[count][AGE_INDEX]);
	}
	printf("|________________________|\n\n");
}

#endif
