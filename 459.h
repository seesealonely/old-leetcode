#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
 	if(s.size()==1)return false;
	int len=s.size();
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len/2+i])
		return false;
		else;
	}       
	return true;
    }
};
