# include <iostream>
# include <string>
using namespace std;
int main(){
 string name;
 getline(cin,name);
 int count = 0;
 int n = name.size();
 for(int i = 0;i<n;i++){
    if(name[i] == 'a' or name[i] == 'e' or name[i] == 'i' or name[i] == 'o' or name[i] == 'u' or name[i] == 'A' or name[i] == 'E' or name[i] == 'I' or name[i] == 'O' or name[i] == 'U') count++;
 }
 cout<<count;
}
