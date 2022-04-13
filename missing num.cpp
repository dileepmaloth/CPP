#include <bits/stdc++.h>
using namespace std;
#define IOS ios :: sync_with_stdio(0);  cin.tie(0); cout.tie(0);
#define endl '\n';

void scanarray(int arr[], int siz){
    for(int i=0;i<siz;i++)
        cin>>arr[i];
}

int compare( int A[], int B[], int siz){
    int ans = 0;
    for(int i=0; i<siz-1; i++)
        ans=((ans)^(A[i]^B[i]));
    return (ans^A[siz-1]);
}

void missing(){
    int a;
    cin>>a;
    int A[a];   scanarray(A,a);
    int B[a-1]; scanarray(B,a-1);
    int C[a-2]; scanarray(C,a-2);
    cout<<compare(A,B,a)<<endl;
    cout<<compare(B,C,a-1)<<endl;
}

int main(){
    IOS
    int t;
    cin>>t;
    while(t--)
        missing();
}
