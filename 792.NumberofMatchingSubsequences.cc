/*
   Given string S and a dictionary of words words, find the number of words[i] that is a subsequence of S.

Example :
Input: 
S = "abcde"
words = ["a", "bb", "acd", "ace"]
Output: 3
Explanation: There are three words in words that are a subsequence of S: "a", "acd", "ace".

Note:

All words in words and S will only consists of lowercase letters.
The length of S will be in the range of [1, 50000].
The length of words will be in the range of [1, 5000].
The length of words[i] will be in the range of [1, 50].

*/

#include"792.NumberofMatchingSubsequences.h"

int main()
{
	Solution s;
	vector<string> v={"a", "bb", "acd", "ace"};
	cout<<s.numMatchingSubseq("abcde",v)<<endl;
	v.clear();v={"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
	cout<<s.numMatchingSubseq("dsahjpjauf",v)<<endl;
	return 0;
}
