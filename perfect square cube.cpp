#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int  n, Q; cin>>Q; cin>>n;
    int s = sqrt(n);
    int c = cbrt(n);

    switch(Q){
        case 1:
            if (s * s == n)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
            break;
        case 2:
            int flag =0;
            if(c*c*c == n) flag=1;
            cout<<(flag?"YES":"NO")<<'\n';
            break;
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
