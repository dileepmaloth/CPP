#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,b,sum=0,num=0; cin>>n>>b; int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=b)
            num++;
        if(sum==b)
            break;
    }
    cout<<num<<'\n';
}

int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
