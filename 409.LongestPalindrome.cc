/*
   Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

   This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/

#include"409.LongestPalindrome.h"

int main()
{
	string ss("abccccdd");
	string ss1("AB");
	Solution s;
	cout<<s.longestPalindrome(ss)<<endl;
	cout<<s.longestPalindrome(ss1)<<endl;
	return 0;
}