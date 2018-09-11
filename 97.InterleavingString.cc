/*
Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.

Example 1:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true

Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false

*/

#include"97.InterleavingString.h"

int main()
{
	Solution s;
	cout<<s.isInterleave("aabcc","dbbca","aadbbcbcac")<<endl;
	cout<<s.isInterleave("aabcc","dbbca","aadbbbaccc")<<endl;
	return 0;
}
