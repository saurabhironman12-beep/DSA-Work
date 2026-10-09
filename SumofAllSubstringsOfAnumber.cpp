# include <iostream>
# include <string>
using namespace std;
int main(){
string s;
getline(cin,s);
int sum = 0;
int n = s.size();
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        int k = stoll(s.substr(i,j));
        sum += k;
    }
}
cout<<sum;
}