#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); ;cin.tie(0); cout.tie(0);

void change(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
        else if (s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;

    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}


signed main(){
    IOS
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while (t--){
        change();
    }
}
