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

    int ans = 2;
    int pd = arr[1]-arr[0];
    int j=2;
    int curr = 2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr = 2;
        }
        j++;;

        ans = max(curr,ans);
    }
        cout<<endl<<"max len = "<<ans;

    return 0;
    }


