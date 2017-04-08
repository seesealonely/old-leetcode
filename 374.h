#include<iostream>
using namespace std;
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
	public:
		int guessNumber(int n) {
		for(int begin=0,end=n;begin<=end;)
			{
			mid=(begin+end)/2;
			if(guess(mid)==-1)
			begin=mid+1;
			else if(guess(mid)==1)
			end=midr-1;
			else return mid;
			}   
		}
};
