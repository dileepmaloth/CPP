#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"size= "<<n<<endl;
    cout<<endl;
    int arr[n][n];

    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
cout<<endl;
    /* print current matrix */

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
cout<<endl;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(i!=j){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }

cout<<"Transposed Matrix"<<endl;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

}
