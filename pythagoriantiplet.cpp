#include<iostream>
#include<math.h>
using namespace std;

bool ispyT(int x, int y,int z){
    int maxi=max(x, max(y,z));
    int b,c;
    if(maxi==x){
        b=y;
        c=z;
    }
    else if(maxi == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }


    if((maxi * maxi) == b*b + c*c)
        return true;
    else
        return false;




}




int main(){
int a,b,c;
cin>>a>>b>>c;
if(ispyT(a,b,c))
    cout<<"Yes, pythagorian triplet";
else
    cout<<"Not PT";


}
