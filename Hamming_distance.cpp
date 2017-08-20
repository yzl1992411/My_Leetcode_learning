#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
void show(int n){ cout << n << " "; }
int main()
{
	int x, y, n, temp, count = 0;
	list<int>nums;

	cin >> x >> y;
	temp = x^y;
	cout << temp << endl;

   while(temp!=0)
	{
		n = temp % 2;
		temp = temp >> 1;
		nums.push_front(n);
	}
	for_each(nums.begin(), nums.end(), show);
	cout << endl;

	vector<int>num(nums.begin(),nums.end());
	for (int i = 0; i < (int)nums.size(); i++)
	{
		if (num[i] == 1)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}