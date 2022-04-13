#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int solve(){
    queue<int> Q;
    int q; cin>>q;
    for(int i=0; i<q; i++){
        string s; cin>>s;
        if(s == "add"){
            int num; cin>>num;
            Q.push(num);
        }
        else if( s=="remove"){
            if(!Q.empty()){
                Q.pop();
            }
        }
        else
            if( !Q.empty() ){
                int x = Q.front();
                cout<<x<<endl;
            }
            else
                cout<<0<<endl;
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--)
        solve();
}

