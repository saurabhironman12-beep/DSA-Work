# include <iostream>
# include <string>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;
    int rno;
};
int main(){
    Student x;
    x.name = "Saurabh";
    x.rno = 94;
    x.cgpa = 9.9;
    Student y;
    y.name = "Halwa";
    y.rno = 33;
    y.cgpa = 9.5;
    Student z;
    z.name = "Pranay";
    z.rno = 48;
    z.cgpa = 9;
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
    cout<<y.name<<" "<<y.rno<<" "<<y.cgpa<<endl;
    cout<<z.name<<" "<<z.rno<<" "<<z.cgpa<<endl;
}
