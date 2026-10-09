# include <iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
cout<<s.substr(0,3)<<endl; // 0 to 2
cout<<s.substr(1,3)<<endl; // 1 to 3
cout<<s.substr(2)<<endl; // 2 to end
}