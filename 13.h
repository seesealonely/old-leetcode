#include<iostream>
#include<map>
using namespace std;
class Solution {
	public:
		int romanToInt(string s) {
			map<char,int> index=
			{ 
				{ 'I' , 1 },
				{ 'V' , 5 },
				{ 'X' , 10 },
				{ 'L' , 50 },
				{ 'C' , 100 },
				{ 'D' , 500 },
				{ 'M' , 1000 } 
			};	
		int res=index[s.back()];
	
		}
};
