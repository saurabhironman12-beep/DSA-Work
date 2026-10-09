# include <iostream>
using namespace std;
class Student{ // User defined data type
public:
    string name;
    int rno;
    float cgpa;
    Student(){//Default constructor
    }
    // nothing is written in default constructor but it is needed without it code gives error
    Student(string n,int r,float c){
        //Parameterised Constructor
        name = n;
        rno = r;
        cgpa = c;            
    }
    Student(int r,float c,string n){
        //Parameterised Constructor
        name = n;
        rno = r;
        cgpa = c;            
    }
    Student(string n,int r){
        //Parameterised Constructor
        name = n;
        rno = r;            
    }
    // if we change the order of parameters even though the parameters are same the constructor would be a new one
    // when we make two or more constructors with same name then it is known as constructor overloading
};
int main(){
    Student x("Raghav",76,8.7);
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
    Student y(94,9.5,"Saurabh");
    Student z("Pranay",48);
    Student alpha;
}