# include<iostream>
using namespace std;
int fun(int n){
    if(n==1 || n == 0) return 1; 
    int ans = n*fun(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
}