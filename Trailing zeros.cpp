#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n; cin>>n;
        while(n){
            n /= 5;
            sum += n;
        }
        cout<<sum<<'\n';
    }
}
