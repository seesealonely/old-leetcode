/*
*/

#include"head.h"

class Solution {
public:
    bool backspaceCompare(string S, string T) {
 	stack<char> sst,tst;       
	for(int i=0;i<S.size();i++)
	{
		if(S[i]!='#')
		sst.push(S[i]);
		else if(!sst.empty()&&S[i]=='#')
		sst.pop();
	}
	for(int i=0;i<T.size();i++)
	{
		if(T[i]!='#')
		tst.push(T[i]);
		else if(!tst.empty()&&T[i]=='#')
		tst.pop();
	}
	return sst==tst;
    }
};
