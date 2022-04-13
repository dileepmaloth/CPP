#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;
    getline(cin,s);
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        if( (s[i]>=65 && s[i]<=90) ){
            int j = (s[i]-65);
            arr[j]++;
        }
        else if( (s[i]>=97 && s[i]<=122) ){
            int k = (s[i]-97);
            arr[k]++;
        }
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

signed main(){
    IOS
    int t;
    cin>>t;    string dub; getline(cin,dub);

    while (t--){
        solve();
    }
}
