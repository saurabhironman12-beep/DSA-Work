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
    print(c);
}
int main(){
   vector<int> a = {2,3,6,8};
   int m = a.size();
   vector<int> b = {1,4,5,7,9,11};
   int n = b.size();
   vector<int> c(m+n);
   merge(a,b,c);

}
