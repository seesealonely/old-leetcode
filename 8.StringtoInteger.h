#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
class Solution {
	public:
		int myAtoi(string str) {
			char s[100];
			memset(s,'\0',100);
			for(int i=0,j=0;i<str.size();)
			{
				if((str[i]<='9'&&str[i]>='0')||str[i]=='-')
					s[j++]=str[i];
				i++;
			}
		long result=atol(s);
			cout<<result<<endl;
		if(result>0)
		return result;
		else return 0;
		}
};
