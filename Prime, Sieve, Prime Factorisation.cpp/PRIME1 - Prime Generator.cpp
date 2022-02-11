#include<bits/stdc++.h>
using namespace std;
bool isprime[100001];

void solve(int num){
    memset(isprime,true,sizeof(isprime));
    isprime[1]=false;
    for(int i=2;i<=num;i++){
        if(isprime[i]==true){
            for(int j=2;j*i<=num;j++){
                isprime[i*j]=false;
            }
        }
    }
}

int main(){
    int n,l,r;
    cin>>n;
    while(n--){
        cin>>l>>r;
        solve(r);
        for(int i=l;i<=r;i++){
            if(isprime[i]){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}