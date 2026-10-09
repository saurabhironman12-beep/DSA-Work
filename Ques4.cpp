# include <iostream>
# include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        string s= to_string(n);
        
            cout<<s.size();
    }
   else{
        string s= to_string(n);
            cout<<s.size()-1;
    }
}
//return the total number of digits in a numbr without using any loop