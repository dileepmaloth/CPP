#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n; cin>>n; string arr[n][4];  string d;getline(cin,d);
    string a,b; getline(cin,a); getline(cin,b);
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++)
            getlin(cin, arr[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++)
            cout<<arr[i][j]<<'\n';
    }
    cout<<'\n';

}

int main(){
     cout<<"Type n:";
    IOS
    int t; cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}

