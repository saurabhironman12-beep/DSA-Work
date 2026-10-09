# include <iostream>
# include <vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int m = a.size();
    int n = b.size();
    int i = 0 , j = 0, k = 0;
    while(i<m && j<n){
    if(a[i]<b[j]){
        c[k] = a[i];
        k++;
        i++;
    }
    else {
        c[k] = b[j];
        k++;
        j++;
    }
    }
    while(i<m){
        c[k] = a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k] = b[j];
        k++;
        j++;
    }
}
void mergeSort(vector<int>& arr){
    int n = arr.size();
    if(n==1) return;
    vector<int> a(n/2);
    vector<int> b(n-n/2);
    int idx = 0;
    for(int i = 0;i<n/2;i++){
        a[i] = arr[idx++];
    }
    for(int i = 0;i<n-n/2;i++){
        b[i] = arr[idx++];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,arr);
}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    print(arr);
    cout<<endl;
    mergeSort(arr);
    print(arr);
}
