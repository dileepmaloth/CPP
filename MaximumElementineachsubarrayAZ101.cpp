#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n,k; cin>>n>>k;
    deque<int> d;
    for(int i=0; i<n; i++){
        int num; cin>>num;
        d.push_back(num);
    }
    while((int)d.size()>=k){
        int x=0, temp = k;
        int m=INT_MIN;
        while(x<temp){
            m = max(m,d[x]);
            x++;
        }
        cout<<m<<" ";
        d.pop_front();
    }
    cout<<endl;
}

int main(){
    IOS
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}

