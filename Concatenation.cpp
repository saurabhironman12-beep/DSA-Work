# include <iostream>
# include <string>
using namespace std;
int main(){
    string name1; 
    cin>>name1; 
    string name2;
    cin>>name2;
    string result = name1 + name2;
    cout<<result<<endl;
    cout<<name1<<endl;
    name1 += "Uchiha";
    cout<<name1<<endl;
}