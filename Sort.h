/* This header for CSE1320 homework 2 was written by William Lyons on 10/5/2015 */

#ifndef SORT_H
#define SORT_H

void sortArray(int array[NUM_STUDENTS][NUM_ATTRIBUTES], int discriminator_index);

void sortArray(int array[NUM_STUDENTS][NUM_ATTRIBUTES], int discriminator_index)
{
	int swapflag = 1;
	int sortlength = NUM_STUDENTS;
	int tempId = 0;
	int tempAge = 0;
	int count = 0;

	/*Bubble Sort*/
	while(swapflag)
	{
		swapflag = 0;
		for(count = 1; count < sortlength; ++count)
		{
			if(array[count-1][discriminator_index] > array[count][discriminator_index])
			{
				tempId = array[count][ID_INDEX];
				tempAge = array[count][AGE_INDEX];
				array[count][ID_INDEX] = array[count-1][ID_INDEX];
				array[count][AGE_INDEX] = array[count-1][AGE_INDEX];
				array[count-1][ID_INDEX] = tempId;
				array[count-1][AGE_INDEX] = tempAge;
				swapflag = 1;
			}
		}
		--sortlength;
	}
}

#endif
