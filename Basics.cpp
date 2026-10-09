# include <iostream>
# include <string>
using namespace std;
int main(){
    string name = "Saurabh";
    cout<<name.length()<<endl;
    cout<<name.size()<<endl;
    cout<<name[1]<<" "<<name<<endl;
    name[0] = 'Z';
    cout<<name<<endl;
    int n = name.size();
    for(int i = 0;i<n;i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;
    for(char ele: name){
        cout<<ele;
    }
}