#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int a,b,c,d,e,f,g,h; cin>>a>>b>>c>>d>>e>>f>>g>>h;
    int ans = (pow(a,b) -c -d/e + pow((pow(f,g)),h) )(pow(10,9))+7;

    cout<<ans;
}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

