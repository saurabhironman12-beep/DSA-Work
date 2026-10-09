# include <iostream>
# include <vector>
using namespace std;
// print first to last element
void printRec(vector<int>& arr, int idx){
if(idx == arr.size()) return;
cout<<arr[idx]<<endl;
printRec(arr,idx+1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    printRec(arr,0);
}
// print last to first element
void printRec(vector<int>& arr, int idx){
if(idx == arr.size()) return;
printRec(arr,idx+1);
cout<<arr[idx]<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    printRec(arr,0);
}