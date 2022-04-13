#include<iostream>
#include<math.h>
using namespace std;

int linearsearch(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
            return i;

    }
    return -1;
}
int main(){
    int size;
    cout<<"enter size";
    cin>>size;

    int arr[size];
    cout<<"enter aray elements";
    for(int i=0;i<size;i++)
        cin>>arr[i];

    int key;
    cout<<"enter key";
    cin>>key;

    cout<<linearsearch(arr,size,key);


}
