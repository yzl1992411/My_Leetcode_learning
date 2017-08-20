#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
void show(int n){ cout << n << " "; }
vector<int> change(int n, vector<int>d)
{
	int temp;
	while (n != 0)
	{
		temp = n % 2;
		n = n >> 1;
		d.push_back(temp);
	}
	return d;
}
void boundary(vector<int>&d1, vector<int>&d2)
{
	int n1 = (int)d1.size();
	int n2 = (int)d2.size();
	if (n1 > n2)
	{
		for (int i = 0; i < (n1 - n2); i++)
		{
			d2.push_back(0);
		}
	}
	else if (n1 < n2)
	{
		for (int i = 0; i < (n2 - n1); i++)
		{
			d1.push_back(0);
		}
	}
	for_each(d1.begin(), d1.end(), show);
	cout << endl;
	for_each(d2.begin(), d2.end(), show);
	cout << endl;
}
int contrast(vector<int>d1, vector<int>d2)
{
	int count = 0;
	for (int i = 0; i < (int)d1.size(); i++)
	{
		if (d1[i] != d2[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int x, y;
	vector<int>d1;
	vector<int>d2;
	vector<int>d3;
	vector<int>d4;
	int nums;

	cin >> x>>y;
	d3 = change(x,d1);
	d4 = change(y,d2);
	for_each(d3.begin(), d3.end(), show);
	cout << endl;
	for_each(d4.begin(), d4.end(), show);
	cout << endl;
	cout << endl;
	boundary(d3, d4);
	nums=contrast(d3, d4);
	cout << nums << endl;
	//int i,count=0;
 //  if (d3.size() == d4.size())
	//{
	//	for (i = 0; i < (int)d3.size(); i++)
	//	{
	//		if (d1[i] != d2[i])
	//			count++;
	//	}
	//}
	//else if (d3.size()>d4.size())
	//{
	//	for (i = 0; i <(int)(d3.size() - d4.size()); i++)
	//	{
	//		d4.push_back(0);
	//	}

	//	for (i = 0; i < (int)d3.size(); i++)
	//	{
	//		if (d1[i] != d2[i])
	//			count++;
	//	}
	//}
	//else
	//{
	//	for (i = 0; i <(int)(d4.size() - d3.size()); i++)
	//	{
	//		d1.push_back(0);
	//	}

	//	for (i = 0; i < (int)d4.size(); i++)
	//	{
	//		if (d1[i] != d2[i])
	//			count++;
	//	}
	//}

	//for_each(d3.begin(), d3.end(), show);
	//cout << endl;
	//for_each(d4.begin(), d4.end(), show);
	//cout << endl;

	//cout << count;
}