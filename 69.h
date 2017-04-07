#include<iostream>
using namespace std;
class Solution 
{
	public:
		int mySqrt(int x)
		{
			int res=0;
			while(res*res<x) res++;
			return res;
		}
};
