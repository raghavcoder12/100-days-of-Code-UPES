/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	long long number;
	if (scanf("%lld", &number) != 1)
		return 0;

	long long current_sum = number;
	long long maximum_sum = number;

	for (int i = 1; i < n; ++i) {
		if (scanf("%lld", &number) != 1)
			return 0;

		if (current_sum > 0)
			current_sum += number;
		else
			current_sum = number;

		if (current_sum > maximum_sum)
			maximum_sum = current_sum;
	}

	printf("%lld\n", maximum_sum);
	return 0;
}

