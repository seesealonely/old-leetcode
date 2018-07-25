/*
*/

#include"head.h"

class Solution {
public:
    bool buddyStrings(string A, string B) {
 	map<char,int> m;
	for(int i=0;i<A.size();i++)
	m[A[i]]=i+1;       
	for(int i=0;i<B.size();i++)
	m[B[i]]^=i+1;	
	for(int i=0;i<m.size();i++)
	if(!m[i]) m.erase(i);
	return m.size()==2&&A.size()==B.size();
    }
};
