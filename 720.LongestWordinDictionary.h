/*
Given a list of strings words representing an English Dictionary, find the longest word in words that can be built one character at a time by other words in words. If there is more than one possible answer, return the longest word with the smallest lexicographical order.
If there is no answer, return the empty string.

Example 1:

Input: 
words = ["w","wo","wor","worl", "world"]
Output: "world"
Explanation: 
The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".

Example 2:

Input: 
words = ["a", "banana", "app", "appl", "ap", "apply", "apple"]
Output: "apple"
Explanation: 
Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".

Note:
All the strings in the input will only contain lowercase letters.
The length of words will be in the range [1, 1000].
The length of words[i] will be in the range [1, 30].
*/

#define c11

#include"head.h"

class Solution {
public:
    string longestWord(vector<string>& words) {
	sort(words.begin(),words.end());        
	string res;
	unordered_set<string> set;
	for(int i=0;i<words.size();i++)
	{
		if(words[i].size()==1||set.count(words[i].substr(0,words[i].size()-1)))
		{
			res=res.size()<words[i].size()?words[i]:res;
			set.insert(words[i]);
		}
	}
	return res;
    }
};
