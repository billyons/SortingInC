/* This is homework #2 for CSE1320 written by William Lyons on 10/5/2015 */

#define ID_INDEX 0
#define AGE_INDEX 1

#include <stdio.h>
#include "StudentConstants.h"
#include "Sort.h"
#include "PrintTable.h"

int main(void)
{
	/*Variable Declarations*/
	int studentData[NUM_STUDENTS][NUM_ATTRIBUTES] = {0};
	int count = 0;

	/*Initialize Array*/
	for(count = 0; count < 7; ++count)
	{
		studentData[count][ID_INDEX] = (rand()%100000);
	}
	for(count = 0; count < 7; ++count)
	{
		studentData[count][AGE_INDEX] = 18+(rand()%13);
	}

	/*Print Unsorted, Sort by ID, Print, Sort by Age, Print*/
	printf("Before sorting...\n");
	printStudentTable(studentData);

	sortArray(studentData, ID_INDEX);
	printf("After sorting by ID_INDEX...\n");
	printStudentTable(studentData);

	sortArray(studentData, AGE_INDEX);
	printf("After sorting by AGE_INDEX...\n");
	printStudentTable(studentData);
}
