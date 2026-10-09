# include<iostream>
using namespace std;
int n;
void fun(int i){
    if(i>n) return; 
    cout<<i<<" ";
    fun(i+1);
}
int main(){
    cin>>n;
   fun(1);
}