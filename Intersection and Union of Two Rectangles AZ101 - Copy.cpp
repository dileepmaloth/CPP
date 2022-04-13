#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int x1,y1,x2,y2,x3,y3,x4,y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int a1,b1, a2,b2;
    a1 = max(x1,x3); a2 = min(x2,x4);
    b1 = max(y1,y3); b2 = min(y2,y4);
    int ai = 0;
    if(a2-a1>0 && b2-b1>0){
        ai = (a2-a1) * (b2-b1);
    }
    int ar1 = (x2-x1)*(y2-y1);
    int ar2 = (x3-x4)*(y3-y4);
    cout<<ai<<" "<<ar1+ar2-ai<<'\n';

}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
