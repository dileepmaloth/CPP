#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pattern(){
    int n,m; cin>>n>>m;
    for(int i=1;i<=3*n+1;i++){
        for(int j=1;j<=3*m+1;j++){
            if(i%3==1) cout<<"*";
            else{
                if(j%3==1) cout<<"*";
                else  cout<<".";
            }
        }
        cout<<'\n';
    }
}
int main(){
    IOS
    int t;
    cin>>t;
    while(t--){  pattern();}
    return (0);
}




