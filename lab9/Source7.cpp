#include <iostream>
using namespace std;
void maxsum(int arr[], int s)
{
	int max = INT_MIN;
	int v = 0;
	int sum = 0;
	int tsum = 0;
	while (v <= s-1)
	{
		int temp = arr[0];
		for (int i = 1; i < s; i++)
		{
			arr[i - 1] = arr[i];
			sum = (i - 1) * arr[i - 1];
			tsum = tsum + sum;
		}
		arr[s - 1] = temp;
		sum = (s - 1) * arr[s - 1];
		tsum += sum;
		if (tsum > max)
		{
			max = tsum;
		}
		v++;
	}
	cout << tsum << endl;
}
int main()
{
	int arr[4] = { 8,3,1,2 };
	int s = 4;
	maxsum(arr, s);
	cout << endl;
	return 0;
}