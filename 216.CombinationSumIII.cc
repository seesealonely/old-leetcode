/*


Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

Example 1:

Input: k = 3, n = 7

Output:

[[1,2,4]]


Example 2:

Input: k = 3, n = 9

Output:

[[1,2,6], [1,3,5], [2,3,4]]

*/

#include"216.CombinationSumIII.h"

int main()
{
	Solution s;
	show(s.combinationSum3(3,9));
	cout<<"##################"<<endl;
	show(s.combinationSum3(3,15));
	cout<<"##################"<<endl;
	return 0;
}
