#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    set<int>s;
    set<int>::iterator it;
    int q; cin>>q;
    for(int i=0; i<q; i++){
        string st; cin>>st;

        if(st== "add"){
            int num; cin>>num;
            s.insert(num);
        }

        else if(st=="erase"){
            int num; cin>>num;
            auto itr = s.find(num);
            if(itr!=s.end()){
                s.erase(num);
            }
        }
        else if(st=="find"){
            int num; cin>>num;
            auto itr = s.find(num);
            if(itr!=s.end())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(st=="print"){
            if(!s.empty()){
                for(it=s.begin(); it!=s.end(); it++)
                    cout<<*it<<" ";
            }
            cout<<endl;
        }
        else{
            s.clear();
        }
    }
}

int main(){
    IOS;
    int t; cin>>t;
    while(t--)
        solve();
}
