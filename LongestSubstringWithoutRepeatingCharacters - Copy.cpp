// 
#include <bits/stdc++.h>

using namespace std;


bool checkInclusion(string s1, string s2) {
        int ls1 = s1.length(); char c; string ps1 = "";
        
        do{
            cout<<s1<<endl;
            ps1 = s1;
            size_t found = s2.find(ps1);
            if(found!= string::npos){
                cout<<"true"<<endl;
                return true;
            } 
            
        
        }while (next_permutation(s1.begin(), s1.end()));
        return false;
    }

int main()
{
    string s1 = "abc";

    string s2 = "xycdhnmcbajkndjk";
    checkInclusion(s1,s2);

}
