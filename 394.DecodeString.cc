/*
 Given an encoded string, return it's decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; No extra white spaces, square brackets are well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4].

Examples:

s = "3[a]2[bc]", return "aaabcbc".
s = "3[a2[c]]", return "accaccacc".
s = "2[abc]3[cd]ef", return "abcabccdcdcdef".

*/

#include"394.DecodeString.h"

int main()
{
	string ss1("3[a]2[bc]");
	string ss2("3[a2[c]]");
	string ss3("2[abc]3[cd]ef");
	string ss4("sd2[f2[e]g]i");
	Solution s;
//	cout<<s.decodeString(ss1)<<endl;
//	cout<<s.decodeString(ss2)<<endl;
//	cout<<s.decodeString(ss3)<<endl;
	cout<<s.decodeString(ss4)<<endl;
	return 0;
}
