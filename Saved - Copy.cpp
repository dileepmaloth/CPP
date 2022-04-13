     //Jithendra Mekarthi

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> membersid(n);

    for(int i=0;i<n;i++){
        cin>>membersid[i];
    }

    int con;
    cin>>con;

    vector<pair<int,int>> connections(con);
    for(int i=0;i<con;i++){
        cin>>connections[i].first>>connections[i].second;
    }
    int sid;
    cin>>sid;

    int rid;
    cin>>rid;

    vector<pair<int,int>>::iterator it;
    int i=0;
    while(i<con){
        if(connections[i].first==sid && connections[i].second==rid){
            cout<<"1"<<endl;
            break;
        }

        else if(connections[i].first==sid){
            sid=connections[i].second;
            i=0;
        }
        else{
            i++;
        }
    }
    if(i==con){
            cout<<"0"<<endl;
        }

}

int main(){
        IOS
        solve();
    return 0;
}
