#include <bits/stdc++.h>
# include <string>
using namespace std;
int main(){
        string chars;
        getline(cin,chars);
        string ans;
        int i = 0,j = 0;
        int n = chars.size();
            int count = 0;
        while(j<n){
            if(chars[i]==chars[j]) {
                count++;
                j++;}
            else{
                string str = to_string(count);
                ans.push_back(chars[j-1]);
                ans += str;
                count=0;
                i=j;
            }
        }
          ans.push_back(chars[j-1]);
            string str = to_string(count);
            ans += str;
            count=0;
            i=j;
        int m = ans.size();
        for(char ele : ans){
            cout<<ele;
        }
        cout<<endl;
        cout<<m<<endl;
    }


 

