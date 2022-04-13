#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n,x,c=0; cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());
    vector<int>::iterator upper1;

    int upper1 = upper_bound(v.begin(), v.end(), 35);
    cout<<upper1<<endl;

    for(int i=0;i<n;i++){
        cout<<v[i];
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

