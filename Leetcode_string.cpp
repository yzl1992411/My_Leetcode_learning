Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true
Example 2:
Input: "LL"
Output: false

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str = "LRDUUDLRUDLR";
//	int len = str.size();
//	int m=0,n=0;
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] == 'L')
//			m++;
//		if (str[i] == 'R')
//			m--;
//		if (str[i] == 'U')
//			n++;
//		if (str[i] == 'D')
//			n--;
//		cout << str[i] << endl;
//	}
//	if (n == 0 & m == 0)
//	{
//		cout << m << endl;
//		cout<< n << endl;
//		return true;
//	}
//	else
//	{
//		cout << m << endl;
//		cout << n << endl;
//		return false;
//	}
//	return 0;
//}