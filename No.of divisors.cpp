#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,ans=2; cin>>n;
    int root = sqrt(n);
    if(n==1){
        cout<<1<<'\n';
        return;
    }
    for(int i=2;i<=root;i++){
        if(n%i==0){
            if(n/i != i) ans+=2;
            else
                ans++;
        }

    }
    cout<<ans<<'\n';
}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
