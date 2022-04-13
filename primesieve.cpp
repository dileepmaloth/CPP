#include<iostream>
using namespace std;

void primesieve(int n){
    int prime[n]={0};
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j+=i)
             prime[j]=1;

    }
    int count = 0;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            ++count;
            cout<<i<<" ";
        }

    }
    cout<<endl<<count;
}


int main(){
    int n;
    cin>>n;
    primesieve(n);



}
