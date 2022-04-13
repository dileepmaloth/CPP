
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pattern(){
    int n,m; cin>>n>>m;
    for(int i=1;i<=(n+1)+((m-1)*n);i++){
        for(int j=1;j<=m*m+1;j++){

            if(i%m==1) cout<<"*";
            else{
                if(i==j) cout<<"\\";
                if(i+(j%3)==4) cout<<"/";
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
    while(t--)  pattern();
    return 0;
}




