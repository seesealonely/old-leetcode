/*
In a string S of lowercase letters, these letters form consecutive groups of the same character.

For example, a string like S = "abbxxxxzyy" has the groups "a", "bb", "xxxx", "z" and "yy".

Call a group large if it has 3 or more characters.  We would like the starting and ending positions of every large group.

The final answer should be in lexicographic order.

 

Example 1:

Input: "abbxxxxzzy"
Output: [[3,6]]
Explanation: "xxxx" is the single large group with starting  3 and ending positions 6.

Example 2:

Input: "abc"
Output: []
Explanation: We have "a","b" and "c" but no large group.

Example 3:

Input: "abcdddeeeeaabbbcd"
Output: [[3,5],[6,9],[12,14]]

 

Note:  1 <= S.length <= 1000
*/

#include"head.h"

class Solution {
public:
    vector<vector<int> > largeGroupPositions(string S) {
	vector<vector<int> > res;
	vector<int> one;
	int len=1;
 	for(int i=0;i<S.size();)
	{
		for(int j=i+1;j<S.size();j++)
		if(S[i]==S[j]) len++;
		else break;
		if(len>=3)
		{
		one.clear();
		one.push_back(i);
		one.push_back(i+len-1);
		 res.push_back(one);
		}	
		i+=len;	
		len=1;
	} 
	return res;
    }
};
