# include <iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string n,int runs,float avg){
        name = n;
        (*this).runs = runs;
        this-> avg = avg;
        // the (*this). and this-> are one and the same thing they do the changes or consider the object of which the address is(POINTER)
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",14000,58.1);
    Cricketer c2("Sachin Tendulkar Sir",18000,46.7);
    Cricketer c3("Rohit Sharma",11000,49.4);
    Cricketer* ptr = &c1; // the data type to use for pointer will be the same as the data type of variable
    // for object pointer '->' can be used
    ptr->avg = 74.2; // (*ptr).avg = 74.2; they are one and the same thing as they are pointers
    cout<<c1.avg<<endl;  
    cout<<ptr->name<<endl; // cout<<(*ptr).name<<endl;
    cout<<ptr->runs<<endl; // cout<<(*ptr).runs<<endl;
    
    // cout<<(*ptr).name<<endl;
    // cout<<(*ptr).runs<<endl;
    // cout<<(*ptr).avg<<endl;
    
    // int x = 10;
    // int* ptr = &x;
    // *ptr = 20;
    // cout<<x<<endl; 
    // '*' is a derefernce operator
    Cricketer* p = new Cricketer("ABD",10000,55.4);
    p->print();
    Cricketer* Ptr = &c1;
    cout<<p<<endl;
    cout<<(*p).name<<endl; 
    cout<<(*p).runs<<endl;
    cout<<(*p).avg<<endl;
    int x = 10;
    cout<<&x<<endl;
    int*y = new int(10);
    // y here stores the address of some unknown variable whose value is same as variable x which is 10, thererfore &x and y will be different
    cout<<y;
}