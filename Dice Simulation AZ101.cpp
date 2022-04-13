#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int rotate_r(int *b){
    int t;
    t = b[3]; b[3]=b[2]; b[2]=b[1];
               b[1]=b[0]; b[0]=t;
}
int rotate_l(int b[]){
    int t;
    t = b[0]; b[0]=b[1]; b[1]=b[2];
               b[2]=b[3]; b[3]=t;
}

void solve(){
    int a[6],b[4];
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E' || s[i]=='W'){
            b[0]=a[0];  b[1]=a[2];
            b[2]=a[5];  b[3]=a[3];
            if(s[i]=='E')
                rotate_r(b);
            if(s[i]=='W')
                rotate_l(b);
            a[0]=b[0];  a[2]=b[1];
            a[5]=b[2];  a[3]=b[3];

        }
        if(s[i]=='N' || s[i]=='S'){
            b[0]=a[0];  b[1]=a[4];
            b[2]=a[5];  b[3]=a[1];
            if(s[i]=='N')
                rotate_r(b);
            if(s[i]=='S')
                rotate_l(b);
            a[0]=b[0];  a[4]=b[1];
            a[5]=b[2];  a[1]=b[3];
        }
    }
    cout<<a[0]<<'\n';
}
int main(){
    IOS
    int t;
    cin>>t;
    while(t--)
        solve();
    return (0);
}
