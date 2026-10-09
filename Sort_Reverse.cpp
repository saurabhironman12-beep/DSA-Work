# include <iostream>
# include <string>
# include <algorithm>
using namespace std;
int main(){
    string name = "Saurabh";
    reverse(name.begin(),name.end());
    cout<<name<<endl;
    sort(name.begin(),name.end());
    cout<<name<<endl;
}