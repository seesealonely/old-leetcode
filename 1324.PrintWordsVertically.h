/*
Given a string s. Return all the words vertically in the same order in which they appear in s.
Words are returned as a list of strings, complete with spaces when is necessary. (Trailing spaces are not allowed).
Each word would be put on only one column and that in one column there will be only one word.

 

Example 1:

Input: s = "HOW ARE YOU"
Output: ["HAY","ORO","WEU"]
Explanation: Each word is printed vertically. 
 "HAY"
 "ORO"
 "WEU"

Example 2:

Input: s = "TO BE OR NOT TO BE"
Output: ["TBONTB","OEROOE","   T"]
Explanation: Trailing spaces is not allowed. 
"TBONTB"
"OEROOE"
"   T"

Example 3:

Input: s = "CONTEST IS COMING"
Output: ["CIC","OSO","N M","T I","E N","S G","T"]

*/

#include"head.h"

class Solution {
public:
    vector<string> printVertically(string s) {
	vector<string> ws;istringstream is(s);
	string sub;
	while(is>>sub) ws.push_back(sub);
	int row=0,col=ws.size();
	for(int i=0;i<ws.size();i++)
	if(ws[i].size()>row)
		row=ws[i].size();	
	vector<string> res(row);
	for(int i=0;i<row;i++)
	for(int j=0;j<ws.size();j++)
	if(ws[j].size()>i)
		res[i]+=ws[j][i];
	else
		res[i]+=' ';
	for(int i=0;i<res.size();i++)
		while(res[i].back()==' ')
			 res[i].pop_back();
	return res;
    }
};
