#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            int ab=(a/b)+1;
            int ans=(b*ab)-a;
            cout<<ans<<endl;
        }
    }
    return 0;
}