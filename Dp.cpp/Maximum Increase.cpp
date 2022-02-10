#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int dp[n];
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            dp[i]+=dp[i-1];
        }
    }
    int a=0;
    for(int i=0;i<n;i++){
        a=max(a,dp[i]);
    }
    cout<<a<<endl;
    return 0;
}