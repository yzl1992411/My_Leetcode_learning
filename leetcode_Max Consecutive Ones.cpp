Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Note:

The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void show(int n){ cout << n << " "; }

int main()
{
	int arr[8] = {1,0,1,1,1,0,1,1};
	vector<int>nums(arr,arr+8);

	int i,j;
	vector<int>position;
	for (i = 0; i <8; i++)
	{
		if (nums[i]!=1)
		{
			position.push_back(i);
		}
	}
	position.push_back(8);
	for_each(position.begin(), position.end(), show);
	cout << endl;

	int  n = position.size();
	vector<int>num;
	num.push_back(position[0]);
	for (i = 0; i < n-1; i++)
	{
		int numbers = 0;
		for (j = position[i] + 1; j <position[i + 1]; j++)
		{
			numbers += 1;
		}
		num.push_back(numbers);
	}
	for_each(num.begin(), num.end(), show);
	cout << endl;

	int num2 = num.size();
	int temp = num[0];
	for (i = 0; i < num2; i++)
	{
		if (num[i] > temp)
		{
			temp = num[i];
		}
	}
	cout << temp << endl;
	return 0;
}