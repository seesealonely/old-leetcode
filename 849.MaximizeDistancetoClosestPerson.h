/*
In a row of seats, 1 represents a person sitting in that seat, and 0 represents that the seat is empty. 

There is at least one empty seat, and at least one person sitting.

Alex wants to sit in the seat such that the distance between him and the closest person to him is maximized. 

Return that maximum distance to closest person.

Example 1:

Input: [1,0,0,0,1,0,1]
Output: 2
Explanation: 
If Alex sits in the second open seat (seats[2]), then the closest person has distance 2.
If Alex sits in any other open seat, the closest person has distance 1.
Thus, the maximum distance to the closest person is 2.

Example 2:

Input: [1,0,0,0]
Output: 3
Explanation: 
If Alex sits in the last seat, the closest person is 3 seats away.
This is the maximum distance possible, so the answer is 3.

Note:

    1 <= seats.length <= 20000
    seats contains only 0s or 1s, at least one 0, and at least one 1.


*/

#include"head.h"

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
	//return firstWay(seats);
	return secondWay(seats);
    }
	int firstWay(vector<int> &seats)
	{
		int len=seats.size(),res=0;
		vector<int> left(len,len),right(len,len);
	
		for(int i=0;i<len;i++)
		if(seats[i]) left[i]=0;
		else if(i>0) left[i]=left[i-1]+1;
	
		for(int i=len-1;i>-1;i--)
		if(seats[i]) right[i]=0;
		else if(i<len-1) right[i]=right[i+1]+1;
		
		for(int i=0;i<len;i++)
		if(!seats[i])
		res=max(res,min(left[i],right[i]));
		
		return res;
	}
	int secondWay(vector<int> &seats)
	{
		int len=seats.size(),res=0,begin=0,end=0;
		for(;end<len;end++)
		{
			if(seats[end])
			{
				if(!begin&&!seats[begin]) res=max(res,end-begin);	
				else res=max(res,(end-begin+1)/2);
				begin=end;
			}
		}
		return max(res,len-begin-1);
	}
};
