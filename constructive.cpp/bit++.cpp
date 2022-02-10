#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string a;
    int ans=0;
    cin>>n;
    while(n--){
        cin>>a;
        if((a[0]=='+' && a[1]=='+' && a[2]=='X') || (a[0]=='X' && a[1]=='+' && a[2]=='+')){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}