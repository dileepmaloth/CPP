
#include"bits/stdc++.h"
using namespace std;

int main(){
    int i,j,n;
    cout<<"enter the size:";
    cin>>n;

    int arr[n];
    cout<<endl<<"enter the array ele:";
    for (i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl<<"array ele are:"<<" ";
    for (i=0;i<n;i++)
        cout<<arr[i]<<" ";

    int maxi = INT_MIN;
    for(i=0;i<n;i++)
        maxi = max(arr[i],maxi);
    int arr2[maxi];

    for(i=0;i<maxi;i++)
        arr2[i]= -1;

    int mini = INT_MAX;

    for(int j=0;j<n;j++){
        if(arr2[arr[j]] != -1)
            mini=min(mini,arr2[arr[j]]);
        else
            arr2[arr[j]]=j;


    }
    cout<<endl<<"first rep indx= ";
    if(mini == INT_MAX)
        cout<<"-1";
    else
        cout<<mini+1;

}




