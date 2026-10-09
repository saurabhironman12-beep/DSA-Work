# include <iostream>
# include <string>
using namespace std;
int main(){
    string name = "Saurabh";
    name.push_back('U');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
}