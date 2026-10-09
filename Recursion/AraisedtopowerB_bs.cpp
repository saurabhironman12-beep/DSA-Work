# include <iostream>
using namespace std;
long long power(int a,int b){
    if(b==0) return 1;
    int p = power(a,b/2);
    if(b%2 == 0) return p*p;
    else return a*p*p;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}