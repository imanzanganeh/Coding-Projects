#include <stdio.h>

int main(int argc, char *argv[]) {
	for (i = 0; i < size - 1; i++)// for loop to find the location of the min value in array of scores
		{
			min = i;
			for(j = i + 1; j < size; j++)
			{
				if (arr[min] > arr[j])
				{
					min = j;
				}
			}
		}
		for (i = size; i > 0; i--)
			{
				max = i;
				for(j = i + 1; j < size; j++)
				{
					if (arr[max] < arr[j])
					max = j;
				}
			}
}