
#include<iostream>
#include<math.h>
using namespace std;

swapp(int a,int b){
int temp;
temp = a;
a=b;
b=temp;
cout<<a<<"-"<<b;
}

int main(){
int a=20,b=8;
cout<<a<<"  "<<b;
cout<<endl;
swapp(a,b);



}
