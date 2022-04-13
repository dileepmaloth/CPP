#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);


void print( int a,int b,string s){
for(int i=a;i<=b;i++){
    cout<<s[i];
}

}

string solve(){
    string s;
    cout<<"enter string:"<<endl;
    cin>>s;

    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

    string k;
    getline(cin,k);



    for(int i=0;i<n;i++){
        string s1,s2;
        cout<<"enter Q: "<<endl;
        getline(cin,s1);
        cout<<"s[0]: "<<s1[0];
        int j=0;

        while(s1[j] !=' '){
            s2=s2+s1[j];
            j++;
            cout<<s2;
        }
        cout<<"s2, j : "<<s2<<j;
        if(s2=="print")
            print((s[j+1]-'0'),(s[j+3]-'0'),s);

    }
}






signed main(){
    IOS
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while (t--){
        solve();
    }
}
