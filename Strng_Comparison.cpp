# include <iostream>
# include <string>
using namespace std;
int main(){
    string x; 
    cin>> x; 
    string  y;
    cin>> y;
    if (x == y) cout<<"Same"<<endl;
    else cout<<"Different"<<endl;
    
    if(x>y) cout<<x<<" is greater than "<<y<<endl;
    else cout<<y<<" is greater than "<<x<<endl;
}