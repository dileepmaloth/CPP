#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int q; cin>>q;
    stack <int> s;
    while(q--){
        string st;
        cin>>st;
        if(st=="add"){
            int x; cin>>x;
            s.push(x);
        }
        else if(st=="remove"){
            if(!s.empty()){
                s.pop();
            }
        }
        else {
            if(!s.empty()){
                cout<<( s.top() )<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
