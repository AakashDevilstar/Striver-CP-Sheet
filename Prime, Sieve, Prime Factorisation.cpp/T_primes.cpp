#include<bits/stdc++.h>
using namespace std;
int count[1000000];

void solve(){
    memset(count,1,sizeof(count));
    for(int i=2;i<=1000000;i++){
        for(int j=2;j*i<=1000000;j++){
            count[j*i]+=1;
        }
    }
}

int main(){
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        solve();
        if(count[n]==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
