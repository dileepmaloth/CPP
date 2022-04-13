#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int compare_val(pair<string,int>a, pair<string, int>b){
    return a.second<b.second;
}

void solve(){
    int n;
    cin>>n;
    vector< pair<string, int> >v;

    for(int i=0;i<n;i++){
        string str; int val;
        cin>>str;
        cin>>val;
        v.push_back({str,val});
    }
    sort(v.begin(), v.end(), compare_val);
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
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

