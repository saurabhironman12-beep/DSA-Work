# include <iostream>
using namespace std;
int main(){
    string s = "Saurabh is smartest";
    string ans = "";
    int n = s.size();
    int i = 0, j = 0;
    int maxlen = 0;
    while(j<n){
        if(s[j]!=' '){
            j++;
        } 
        else{
            int len = j-i;
           if(len>maxlen){ 
            maxlen = len;
            ans = s.substr(i,j);
           }
            i=j;
            while(i<n && s[i]==' '){
                i++;
                j++;
            }
        }
    }
    int len = j-i;
        if(len>maxlen) 
        {maxlen = len;
            ans = s.substr(i,j);}
        i=j;
        while(i<n && s[i]==' '){
            i++;
            j++;
        }
    cout<<maxlen<<" "<<ans<<endl;
}