# include <iostream>
using namespace std;
int hcf(int n,int m){
    int a = min(n,m);
    int b = max(n,m);
   if(a == 0) return b;
   return hcf(b%a,a);
}
int main(){
    int n,m;
    cout<<"Enter two numbers: "<<endl;
    cin>>n>>m;
    cout<<hcf(n,m);
}