/*
 Given a positive integer n, break it into the sum of at least two positive integers and maximize the product of those integers. Return the maximum product you can get.

For example, given n = 2, return 1 (2 = 1 + 1); given n = 10, return 36 (10 = 3 + 3 + 4).

Note: You may assume that n is not less than 2 and not larger than 58
*/

#include"343.IntegerBreak.h"

int main()
{
	Solution s;
	cout<<s.integerBreak(2)<<endl;
	cout<<s.integerBreak(10)<<endl;
	return 0;
}
