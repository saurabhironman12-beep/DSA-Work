# include <iostream>
# include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    if(n==0) cout<<"0";
    while(n!=0){
        int v = (n%10);
        char ch = v+48;
        s.push_back(ch);
        n /= 10;
    }
    int m = s.size();
    int i = 0;
    int j = m-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
}