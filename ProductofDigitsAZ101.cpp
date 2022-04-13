#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
void solve(){
    const int m = 1e9+7;
    int n,p=1,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        p = (p*d) % m;
    }
    cout<<p<<'\n';
}

signed main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
