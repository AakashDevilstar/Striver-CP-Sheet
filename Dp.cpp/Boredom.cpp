#include<bits/stdc++.h>
 
using namespace std;
long long dp[100010];
long long freq[100010];
int main()
{
	int n,i,k,maxn=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(maxn<k) maxn=k;
		freq[k]++;
	}
	dp[1]=freq[1];
	for(i=2;i<=maxn;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
	}
	cout<<dp[maxn];
	return 0;
}
 