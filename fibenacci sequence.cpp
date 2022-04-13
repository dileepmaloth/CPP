#include<iostream>
#include<math.h>
using namespace std;

void fib(int num){
    int t1=0, t2=1, nterm;
    for(int i=1;i<=num;i++){
        cout<<t1<<" ";
        nterm = t1+t2;
        t1=t2;
        t2=nterm;
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    fib(n);
}
