# include <iostream>
using namespace std;
class ComplexNumber{
public:
double real;
double img;
ComplexNumber(int r,int i){
    real = r;
    img = i;
}
void Add(ComplexNumber c2){
    real = real + c2.real;
    img = img + c2.img;
}
void Subtract(ComplexNumber c2){
    real = real - c2.real;
    img = img - c2.img;
}
void Multiply(ComplexNumber c2){
    double r = real;
    double i = img;
    real = real*c2.real - img*c2.img;
    img = r*c2.img + img*c2.real;
}
void Divide(ComplexNumber c2){
    double r = real;
    real = (real*c2.real + img*c2.img)/(c2.real*c2.real+c2.img*c2.img);
    img = (img*c2.real-r*c2.img)/(c2.real*c2.real+c2.img*c2.img);
}
void print(){
    if (img>=0) cout<<real<<" "<<"+"<<" "<<img<<"i"<<endl;
    else cout<<real<<" "<<"-"<<" "<<(-img)<<"i"<<endl;
}
};
int main(){
    int a;
    int b;
    cin>>a>>b;
    int c;
    int d;
    cin>>c>>d;
    ComplexNumber c1(a,b);
    ComplexNumber c2(c,d);
    c1.Add(c2);
    c1.print();
    c1.Subtract(c2);
    c1.print();
    c1.Multiply(c2);
    c1.print();
    c1.Divide(c2);
    c1.print();
}