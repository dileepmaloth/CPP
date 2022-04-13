#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int sum(){
    string n;
    cin>>n;
    int len = n.length(),i=0,sum=0;
    while(i<len){
        sum += (n[i]-'0');
        i++;
    }
    return sum;
}
signed main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        cout<<sum()<<'\n';
    }

}
