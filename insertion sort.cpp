#include<iostream>
using namespace std;

int insertionsort(int arr[],int n){
    int curr,i,j;
    for(i=1;i<n;i++){
        curr = arr[i];
        j=i-1;

        while(arr[j]>curr &&j>=0 ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    cout<<endl<<"sorted array is"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int n ;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"enter the elements"<<endl;;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n ;i++)
        cout<<arr[i]<<" ";


    cout<<insertionsort(arr,n);
}
