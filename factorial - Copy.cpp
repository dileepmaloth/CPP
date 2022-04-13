#include<iostream>
#include<math.h>
using namespace std;

fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f = f*i;
    }
    cout<<f;
}

int main(){
int n;
cin>>n;
fact(n);


}
