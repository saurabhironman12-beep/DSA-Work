# include <iostream>
# include <string>
using namespace std;
void ways(int m, int n, string s){
    if(n==1 && m == 1){
        cout<<s<<endl; // sahi path
        return;
    }
    if(m==0 || n==0) return;
    ways(m,n-1,s+"R"); // right
    ways(m-1,n,s+"D"); // down
}
int main(){
    int m,n; 
    cout<<"Enter row no and column no: "<<endl;
    cin>>m>>n;
    ways(m,n,"");
}