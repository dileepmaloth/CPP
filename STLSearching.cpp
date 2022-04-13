#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n,q,ans=0; cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i+++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        int t; cin>>t;
        switch (t)
        {
        case 1:
            {
                   lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6); 
                }
            }
            break;
        case 2:
            {
                int x;  cin>>x;
                for(int i=0;i<n;i++){
                    if(a[i]<=x)
                        ans = a[i];  
                }
            }
            break;
        case 3:
            {
                int x;  cin>>x;
                for(int i=0;i<n;i++){
                    if(a[i]<=x)
                        ans++; 
                }
            }
            if(ans == 0)
                ans = -1;
            break;
        case 4:
            {
                int x;  cin>>x;
                for(int i=0;i<n;i++){
                    if(a[i]<x)
                        ans++;      
                }
            }
            if(ans == 0)
                ans = -1;
            break;
        }



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
