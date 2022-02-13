#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int n,x;
        cin>>n>>x;
        int b=2,ans=1;
        while(b<n){
            b+=x;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}