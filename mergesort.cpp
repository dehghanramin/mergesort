//This is a mergesort test implementation.
#include <iostream>
#include "merge.hpp"
#include "mergesort.hpp"

int[] mergesort(int arr[], int const& length)
{
	int arr_copy[]
	if (length <= 1)
		return arr;
	int[length] left;
	int[length] right;
	short count = 0;
	for (int* pI = arr; pI < arr[length]; ++pI)
	{
		if ((*pI) < length / 2)
		{
			left[count++] = (*pI);
		}
		else
		{
			right[count++] = (*pI);
		}
	}
	left = mergesort(left);
	right = mergesort(right);

	return merge(left, right);
}
