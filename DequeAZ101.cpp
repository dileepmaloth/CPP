#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    deque<int> dq;
    int q; cin>>q;
    for(int i=0; i<q; i++){
        string s; cin>>s;

        if(s == "insertback"){
            int num; cin>>num;
            dq.push_back(num);
        }

        else if( s=="eraseback"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }

        else if(s == "insertfront"){
            int num; cin>>num;
            dq.push_front(num);
        }

        else if(s == "erasefront"){
            if(!dq.empty())
                dq.pop_front();
        }

        else if(s == "printfront"){
            if(!dq.empty()){
                cout<<( dq.front() )<<endl;
            }
            else
                cout<<0<<endl;
        }

        else if(s == "printback"){
            if(!dq.empty()){
                cout<<( dq.back() )<<endl;
            }
            else
                cout<<0<<endl;
        }

        else{
            int x; cin>>x;
            if( x < (int)dq.size() ){
                cout<< dq[x] <<endl;
            }
            else
                cout<<0<<endl;
        }
    }
}

int main(){
    IOS;
    int t; cin>>t;
    while(t--)
        solve();
}
