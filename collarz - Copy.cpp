
#include<iostream>
using namespace std;
int coll(int x){
    cout<<x<<"  " ;
    int i=1;
    while(x!=1 && x>1){
        if(x%2==0){
            x=x/2;
            cout<<x<<"  ";

        }
        else{
            x=3*x+1;
            cout<<x<<"  ";
        }

        i++;

    }
    cout<<endl<<"len= "<<i;
}


int main(){
    int x;
    cin>>x;
    coll(x);



}
