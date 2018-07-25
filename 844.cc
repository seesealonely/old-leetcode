/*
*/

#include"844.h"

int main()
{
	Solution s;
	cout<<s.backspaceCompare("ab#c","ad#c")<<endl;
	cout<<s.backspaceCompare("ab##","c#d#")<<endl;
	cout<<s.backspaceCompare("a##c","#a#c")<<endl;
	cout<<s.backspaceCompare("a#c","b")<<endl;
	return 0;
}
