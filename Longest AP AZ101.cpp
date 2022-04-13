#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,d1,d2,len=2,ans=2; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1){
        cout<<1<<'\n';
        return;
    }
    if(n==2){
        cout<<2<<'\n';
        return;
    }
    for(int i=1;i<n-1;i++){
        d1 = arr[i]-arr[i-1];
        d2 = arr[i+1]-arr[i];
        if(d1==d2){
            len++;
            ans = max(len,ans);
        }
        else len = 2;
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

