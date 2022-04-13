#include<iostream>
#include<math.h>
using namespace std;

fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f = f*i;
    }
    return f;
}

int main(){
int n,n1,r,r1,n_r,nCr;
cin>>n>>r;
cout<<endl;

n1 = fact(n);

r1 = fact(r);

n_r = fact((n-r));

nCr = n1/(r1 * n_r);
cout<<nCr;

}
