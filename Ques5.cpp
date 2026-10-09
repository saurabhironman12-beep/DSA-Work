# include <iostream>
# include <string>
# include <climits>
# include <vector>
using namespace std;
int main(){
    vector<string> arr= {"0123","0023","456","00182","940","2901"};
    
    string max = arr[0];
    int ans = -1;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        string m = arr[i];
        if(m>max){
             max = m;
             ans = i;
        }
    }
    cout<<ans;
}