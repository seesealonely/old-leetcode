/*
 A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26

Given an encoded message containing digits, determine the total number of ways to decode it.

For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).

The number of ways decoding "12" is 2. 
*/

#include"head.h"

class Solution {
public:
    int numDecodings(string s) {
	int ir1=1,ir2=1;
	for(int i=1;i<s.size();++i)
	{
	if(s[i]==''0') ir1=1;	
	if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6')
	else ir2=ir1;	
	}
	return ir1;
    }
};
