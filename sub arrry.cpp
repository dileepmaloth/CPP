
#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++){
        int curr = 0;
        for(j=i;j<n;j++){
            curr+=arr[j];
            cout<<arr[j]<<",";
            cout<<curr<<"..";

        }
    }

}
