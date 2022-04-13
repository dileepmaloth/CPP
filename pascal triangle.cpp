
#include<iostream>
#include<math.h>
using namespace std;

factorial(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f = f*i;
    }
    return f;
}

int main(){
int n,i,j;
cin>>n;
cout<<endl;
for(i=0;i<n;i++){
    for(j=0;j<i+1;j++)
        cout<<(factorial(i)/(factorial(j)*factorial(i-j)))<<" ";
    cout<<endl;

}
}
