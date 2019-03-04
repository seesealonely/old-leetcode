/*
Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example 1:

Input: "bcabc"
Output: "abc"

Example 2:

Input: "cbacdcbc"
Output: "acdb"

*/

#include"316.RemoveDuplicateLetters.h"

int main()
{
	Solution s;
	cout<<s.removeDuplicateLetters("bcabc")<<endl;
	cout<<s.removeDuplicateLetters("cbacdcbc")<<endl;
	return 0;
}
