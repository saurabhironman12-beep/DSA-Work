# include <iostream>
# include <string>
# include <vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    vector<string> ans;
    for(int i = 0;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            cout<<s.substr(i,j-i)<<" ";

        }
        cout<<endl;
    } 

}