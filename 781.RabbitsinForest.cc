/*
In a forest, each rabbit has some color. Some subset of rabbits (possibly all of them) tell you how many other rabbits have the same color as them. Those answers are placed in an array.

Return the minimum number of rabbits that could be in the forest.

Examples:
Input: answers = [1, 1, 2]
Output: 5
Explanation:
The two rabbits that answered "1" could both be the same color, say red.
The rabbit than answered "2" can't be red or the answers would be inconsistent.
Say the rabbit that answered "2" was blue.
Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.

Input: answers = [10, 10, 10]
Output: 11

Input: answers = []
Output: 0

Note:

    answers will have length at most 1000.
    Each answers[i] will be an integer in the range [0, 999].


*/

#include"781.RabbitsinForest.h"

int main()
{
	vector<int> v;
	Solution s;
	v.push_back(1);v.push_back(1);v.push_back(2);
	cout<<s.numRabbits(v)<<endl;
	v.clear();v.push_back(10);v.push_back(10);v.push_back(10);
	cout<<s.numRabbits(v)<<endl;
	v.clear();
	cout<<s.numRabbits(v)<<endl;
	return 0;
}