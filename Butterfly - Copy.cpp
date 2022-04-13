
#include<iostream>
using namespace std;
int main(){
int i,j,n,col;
cin>>n;
col = n*2;


for(i=1;i<=n;i++){
    for(j=1;j<=col;j++){
        if(j<=i || j>col-i)
            cout<<"*";
        else
            cout<<" ";
}
    cout<<"\n";
}


for(i=0;i<2*n;i++){
    for(j=0;j<n-i;j++)
        cout<<"*";
    for(j=0;j< 2*i;j++)
        cout<<" ";
    for(j=0;j<n-i;j++)
        cout<<"*";
    cout<<"\n";

}
}
