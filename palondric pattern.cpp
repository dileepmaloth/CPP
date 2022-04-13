#include<iostream>
using namespace std;
int main(){

int i,j,n;
cin>>n;
cout<<endl;

for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++)
        cout<<"  ";
    for(j=i;j>=1;j--)
        cout<<" "<<j;
    for(j=0;j<i-1;j++)
        cout<<" "<<2+j;
    cout<<endl;
}
}
