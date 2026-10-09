# include <iostream>
# include <string>
using namespace std;
int main(){
 string name;
 getline(cin,name);
 int n = name.size();
 for(int i = 0;i<n;i++){
    if(i%2 == 0) name[i] = 'a';

}
cout<<name;
}
