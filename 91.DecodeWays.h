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
/*
int opmizition(string s)
{
	int ir1=1,ir2=1;
	for(int i=1;i<s.size();++i)
	{
		if(s[i]==''0') ir1=1;	
		if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6')
		else ir2=ir1;	
	}
	return ir1;
}
*/
int origin(string s)
{
	int len=s.size();
	vector<int> dp(len,0);
	dp[0]=s[0]!='0'?1:0;
	if(!dp[0]) return 0;
	for(int i=1;i<=s.size();i++)
	{
		if((s[i-1]=='1'||s[i-1]=='2')&&(s[i]<='6'&&s[i]>'0'))
			dp[i]=dp[i-1]+1;
		else if((s[i-1]>'2'||s[i-1]=='0')&&s[i]=='0')
			return 0;
		else if((s[i]>='1'&&s[i]<='9')||((s[i-1]=='1'||s[i-1]=='2')&&s[i]=='0'))
			dp[i]=dp[i-1];
	}
	return dp[len-1];
}

class Solution {
	public:
		int numDecodings(string s) {
	return origin(s);
		}
};
