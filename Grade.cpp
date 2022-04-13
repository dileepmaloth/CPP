#include <bits/stdc++.h>
using namespace std;

void grade(){
    int m,f,mup;
    char g;
    cin>>m>>f>>mup;

    if(m==-1||f==-1)    g='F';
    else if(m+f >=80)   g='A';
    else if(m+f >=65)   g='B';
    else if(m+f >=50)   g='C';
    else if(m+f >=30){
        if(mup>=50)     g='C';
            else        g='D';
    }
    else                g='F';
    cout<<g<<'\n';
}

signed main(){
    cout<<"No.of Test cases: ";
    int t;
    cin>>t;
    cout<<"Enter mid final and makeup test marks: ";
    cout<<'\n';

    ios_base::sync_with_stdio(0);
    cin.tie(0);      cout.tie(0);
    while(t--)
        grade();
}
