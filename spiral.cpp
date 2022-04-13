#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"size= "<<n<<endl;
    cout<<endl;
    int arr[n][n];
    int val=1;
    int s = n;

    int x = 0;
    int i = 1,j;
    while(i <= n*n){
        for(int i=x;i<n;i++){
            arr[x][i]=val++;
        }
        for(i=x+1;i<n;i++){
            arr[i][n-1]=val++;
        }
        for(i=n-2;i>=x;i--){
            arr[n-1][i]=val++;
        }
        for(i=n-2;i>x;i--){
            arr[i][x]=val++;
        }
        x++;
        n=n-1;
    }

    for(i=0;i<s;i++){
        for( j=0;j<s;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

