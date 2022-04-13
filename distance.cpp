#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    double x,y,x1,y1, x2,y2; cin>>x1>>y1>>x2>>y2;
    double ed;
    ed = (sqrt( pow((x1-x2),2)+ pow((y1-y2),2) ));

    x=x1-x2; y=y1-y2;
    if(x<0.0)
        x=-x;
    if(y<0.0)
        y=-y;
    float md = (x+y);
    cout<<fixed<<setprecision(7);
    cout<<ed<<" "<<md<<'\n';
}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

