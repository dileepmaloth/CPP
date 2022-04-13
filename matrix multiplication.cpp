
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int  r1,c1,c2,i,j,k; cin>>r1>>c1>>c2;
    int r2 = c1;
    int a[r1][c1], b[c1][c2], product[r1][c2];
    for(i=0; i<r1; ++i) {
         for(j=0; j<c1; ++j)
         cin>>a[i][j];
      }

      for(i=0; i<r2; ++i) {
         for(j=0; j<c2; ++j)
         cin>>b[i][j];
      }

      for(i=0; i<r1; ++i)
      for(j=0; j<c2; ++j) {
         product[i][j] = 0;
      }

      for(i=0; i<r1; ++i)
      for(j=0; j<c2; ++j)
      for(k=0; k<c1; ++k) {
         product[i][j]+=a[i][k]*b[k][j];
      }

      for(i=0; i<r1; ++i) {
         for(j=0; j<c2; ++j)
         cout<<product[i][j]<<" ";
         cout<<'\n';
      }
   }



int main(){
    IOS
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
