#include<stdio.h>
#include<stdlib.h>
#include "Main.h"

#ifdef INSERTION_SORT
namespace InsertionSort {

	void Insertion_Sort(int dataSize, int dataSet[])
	{
		for (int i = 1; i < dataSize; i++)
		{
			int key = dataSet[i];
			int j = i - 1;
			while (dataSet[j] > key && j >= 0)
			{
				//swap
				dataSet[j + 1] = dataSet[j];
				dataSet[j] = key;
				j = j - 1;
			}
		}
	}
}
int main() {
	int localdataset[] = { 3,6,12,4,77,8,2 };
	InsertionSort::Insertion_Sort(7,localdataset);
	for (int i = 0; i < 7; i++) {
		printf("%d\t",localdataset[i]);
	}
	}
#endif
