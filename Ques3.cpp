# include <iostream>
# include <string>
# include <vector>
using namespace std;
string reverse(string& arr,int i,int j){
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
}
int main(){
 string a;
 getline(cin,a);
 int count = 0;
 int n = a.size();
 reverse(a,0,(n/2)-1);
 cout<<a<<endl;
 
}
