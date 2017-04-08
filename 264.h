#include<iostream>
#include<vector>
inline int min(int one,int two)
{
return one>two?two:one;
}
using namespace std;
class Solution {
	public:
		int nthUglyNumber(int n) {
			if(n<=0) return 0;
			vector<int> res(n-1,0);       
			res[0]=1;
			int u2=0,u3=0,u5=0;
			for(int i=1;i<n;i++)
			{
			res[i]=res[u2]*2>res[u3]*3?(res[u3]*3>res[u5]*5?res[u5]*5:res[u3]*3):(res[u2]*2>res[u5]*5?res[u5]*5:res[u2]*2);
//			res[i]=min(res[u2]*2,min(res[u3]*3,res[u5]*5));
			if(res[i]==res[u2]*2) u2++;	
			if(res[i]==res[u3]*3) u3++;
			if(res[i]==res[u5]*5) u5++;
			cout<<res[i]<<" ";
			}
			cout<<endl;
			return res[n-1];
		}
};
