#include"bits/stdc++.h"
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
        cin>>arr[i];

    int temp=1;
    int ans=1;
    for(i=temp;i<=n;i++){
        int sum=2;
        int diff=arr[i]-arr[i+1];
        for(j=i;j<n;j++){
            if(arr[j]-arr[j+1]==diff){
                sum++;
            }
            else
                break;
            }
            temp=j;
            if(temp==n-1)
                break;

            ans = max(sum,ans);
        }
        cout<<"max len = "<<ans;

    }



