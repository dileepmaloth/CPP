#include <bits/stdc++.h>
using  namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    IOS
    int t,a,b; cin>>t;
    while(t--){
        string s; cin>>s;
        int Q; cin>>Q;
        while(Q--){
            string q; cin>>q;

            if(q=="print"){
                cin>>a>>b;
                cout<<s.substr(a,b-a+1)<<'\n';
            }
            if(q=="reverse"){
                cin>>a>>b;
                reverse(s.begin()+a, s.begin()+b+1) ;
            }
            if(q=="replace"){
                cin>>a>>b;
                string c; cin>>c;
                s.replace(a,b-a+1,c);
            }
            if(q=="rotate"){
                cin>>a;
                int len = s.length();
                s=s.substr(len-a)+s.substr(0,len-a);
            }
        }
    }
}
