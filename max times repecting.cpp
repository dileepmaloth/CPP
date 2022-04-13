#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int i,j;
    string s = "abcettrf";
    int cur=1;
    int maxi=0;

    sort(s.begin(), s.end(), greater<char>());
    for(i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            cur++;
            maxi=max(maxi,cur);


        }
        else{
            cur=1;
            maxi=max(maxi,cur);
        }
    }

    cout<<"frequency = "<<maxi;








}
