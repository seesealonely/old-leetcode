/*
   Given a string s, partition s such that every substring of the partition is a palindrome.

   Return the minimum cuts needed for a palindrome partitioning of s.

   For example, given s = "aab",
   Return 1 since the palindrome partitioning ["aa","b"] could be produced using 1 cut. 
   */

#include"132.PalindromePartitioningII.h"

int main()
{
	string ss("aaaaabb");
	Solution s;
	cout<<s.minCut(ss)<<endl;
	return 0;
}
