#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int sum = 0;
        for(int i=1;i<n;i++){
           if(arr[i-1] > arr[i]){
               sum += arr[i-1] - arr[i];
               arr[i] = arr[i-1];
           }
        }
        cout <<sum<< "\n";
    }
    return 0;
}
