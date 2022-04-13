#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string palindrome(){
    string s,s1;
    getline(cin,s1);
    for(int i=0;i<s1.length();i++){
        if(s1[i]>=97 && s1[i]<=122)
            s = s+s1[i];
    }
    int i=0,f=s.length()-1;
    while(i<=f){
        if(s[i]!=s[f])  return ("NO");
    i++; f--;
    }
    return ("YES");
}

int main(){
    IOS
    int t;
    cin>>t;
    string k;
    getline(cin,k);
    while(t--){ cout<<palindrome()<<'\n'; }
    return (0);
}




