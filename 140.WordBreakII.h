/*
 Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, add spaces in s to construct a sentence where each word is a valid dictionary word. You may assume the dictionary does not contain duplicate words.

Return all such possible sentences.

For example, given
s = "catsanddog",
dict = ["cat", "cats", "and", "sand", "dog"].

A solution is ["cats and dog", "cat sand dog"]. 
*/

#include"head.h"

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
			if(wordDict.empty()) return false;
			vector<bool> dp(s.size()+1,false);
			string word;
			dp[0]=true;
			for(int i=1;i<=s.size();++i)
			{
				for(int j=i-1;j>=0;--j)
				{
					word=s.substr(j,i-j);
					for(int k=0;k<wordDict.size();++k)
						if(wordDict[k]==word)
						{
							dp[i]=true;
							break;
						}
				}
			} 	       
			return dp[s.size()];
    }
};
