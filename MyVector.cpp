# include <iostream>
using namespace std;
class MyVector{// user defined data structure
    private:
    int length;
    int cap;
    int* arr;
    public:
    MyVector(int capacity,int default_value){
        cap = capacity;
        arr = new int(capacity);
        length = capacity;
        for(int i = 0;i<capacity;i++){
            arr[i] = default_value;
        }        
    }
    void push_back(int val){
        if(length == cap){
            int temp[2*cap];
            for(int i = 0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length] = val;
        length += 1;
        cap *= 2;
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        if(length == 0){
            cout<<"Vector is already empty"<<endl;
        }
        length--;
    }
    void set(int idx,int val){
        arr[idx] = val;
    }
    void print(){
        for(int i = 0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(idx == 0 || idx >= length){
            cout<<"Integer out of bound"<<endl;        }
        return arr[idx];
    }
};
int main(){
    MyVector v(5,-1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<v.get(2)<<endl;
    v.set(2,120);
    v.print();
}