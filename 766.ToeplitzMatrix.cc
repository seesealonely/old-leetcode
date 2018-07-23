/*
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same element.

Now given an M x N matrix, return True if and only if the matrix is Toeplitz.
 

Example 1:

Input:
matrix = [
  [1,2,3,4],
  [5,1,2,3],
  [9,5,1,2]
]
Output: True
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.

Example 2:

Input:
matrix = [
  [1,2],
  [2,2]
]
Output: False
Explanation:
The diagonal "[1, 2]" has different elements.


Note:

    matrix will be a 2D array of integers.
    matrix will have a number of rows and columns in range [1, 20].
    matrix[i][j] will be integers in range [0, 99]
*/

#include"766.ToeplitzMatrix.h"

int main()
{
	vector<vector<int> > v1(4);
	v1[0].push_back(1);v1[0].push_back(2);v1[0].push_back(3);v1[0].push_back(4);			
	v1[1].push_back(5);v1[1].push_back(1);v1[1].push_back(2);v1[1].push_back(3);			
	v1[2].push_back(9);v1[2].push_back(5);v1[2].push_back(1);v1[2].push_back(2);			
	Solution s;
	cout<<s.isToeplitzMatrix(v1)<<endl;
	v1.clear();
	v1.resize(2);
	v1[0].push_back(1);	v1[0].push_back(2);
	v1[1].push_back(2);	v1[1].push_back(2);
	cout<<s.isToeplitzMatrix(v1)<<endl;
	return 0;
}
