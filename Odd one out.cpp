#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

void oddout(){
    int siz,temp=0;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++){
        cin>>arr[i];
        temp = temp^arr[i];
    }
    cout<<temp<<'\n';
}
signed main(){
    IOS
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        oddout();

}
