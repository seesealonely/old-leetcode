#include<iostream>
#include<string>
using  namespace std;
class Solution {
	public:
		int numDecodings(string s) {
			int num=0;
			for(int i=0;i<s.size();i++)
			{
			if(s[i]=='0');
			else if(s[i]=='1'&&i+1<s.size()-1)num+=2;
			else if(s[i]=='2'&&i+1<s.size()-1&&s[i+1]<='6')num+=2;
			else num+=1;
			}       
			return num;
		}
};
