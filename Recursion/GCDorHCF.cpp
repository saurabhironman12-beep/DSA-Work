# include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int hcf = 1;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            if(i>hcf) hcf = i;
        }
    }
    cout<<hcf;
}