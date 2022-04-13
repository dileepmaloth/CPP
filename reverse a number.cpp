
#include<bits/stdc++.h>

using namespace std;
int main(){
long int i,j,rem,temp,sum=0,n;
cin>>n;
temp = n;
i = 0;

while(n>0){
    rem = n%10;
    n=n/10;
    sum = sum *10 + rem;
}
cout<<sum;
}
