# include<iostream>
using namespace std;
int fun(int n){
    if(n == 0) return 0; 
    int sum = n + fun(n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
}