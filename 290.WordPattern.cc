/*
Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Examples:

    pattern = "abba", str = "dog cat cat dog" should return true.
    pattern = "abba", str = "dog cat cat fish" should return false.
    pattern = "aaaa", str = "dog cat cat dog" should return false.
    pattern = "abba", str = "dog dog dog dog" should return false.

Notes:
You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space. 
*/

#include"290.WordPattern.h"

int main()
{
	string ss1("dog cat cat dog");
	string ss2("dog cat cat fish");
	string ss3("dog dog dog dog");

	string p1("abba");
	string p2("aaaa");
	Solution s;
	cout<<s.wordPattern(p1,ss1)<<endl;
	cout<<s.wordPattern(p1,ss2)<<endl;
	cout<<s.wordPattern(p2,ss1)<<endl;
	cout<<s.wordPattern(p1,ss2)<<endl;
	return 0;
}
