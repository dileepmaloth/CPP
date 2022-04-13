#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    for(int i=0;i<=str.length();i++){
        int val = str[i];
        if(val >= 97 && val<=122){
            char c = val-32;
            str[i] = c;
        }
    }

    cout<<str;


    }




