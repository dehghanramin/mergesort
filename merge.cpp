//This is mergesort helper function to merge and conquer.
#include "merge.hpp"

int[] merge(int[] left, int const& left_length, int[] right, int const& right_length)
{
	int result[right_length + left_length];
	int r_counter = 0, l_counter = 0, main_counter = 0;
	while ((l_counter < left_length) && (r_counter < right_length)
	{
		if (left[l_counter] < right[r_counter])
		{
			result[main_counter] = left[l_counter];
			l_counter++;
			main_counter++;
		}
		else
		{
			result[main_counter] = right[r_counter];
			r_counter++;
			main_counter++;
		}
	}
	while (l_counter < left_length)
	{
		result[main_counter] = left[l_counter];
		l_counter++;
		main_counter++;
	}
	while (r_counter < rght_length)
	{
		result[main_counter] = right[right_counter];
		r_counter++;
		main_counter++;
	}
	return result[];
}
