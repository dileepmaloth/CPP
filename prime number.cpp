#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void primecheck(){
    int n,flag=1; cin>>n;
    int root = sqrt(n);
    if(n==1){
        cout<<"NO"<<'\n';
        return;
    }
    if(n==2){
        cout<<"YES"<<'\n';
        return;
    }
    for(int i=2;i<=root;i++){
            if( (n%i) == 0){
                flag=0;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<'\n';


}


int main(){
    IOS
    int t; cin>>t;
    while(t--)
        primecheck();

    return 0;
}

