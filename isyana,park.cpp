#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Array = ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"record breaking days= ";
    int rb = arr[0];
    int j=1;
    while(j<n){
        if(arr[j]>rb&&arr[j+1]<arr[j]){
            rb=arr[j];
            cout<<endl<<rb<<" ";}
        j++;

    }



}
