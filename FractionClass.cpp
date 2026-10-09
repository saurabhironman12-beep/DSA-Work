# include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
class Fraction{
    public:
    int nr;
    int dr;
    Fraction(int n,int d){
        nr = n;
        dr = d;
        simplify();
    }
    void print(){
        if(dr==1) cout<<nr<<endl;
        else cout<<nr<<"/"<<dr<<endl;
    }
    void add(Fraction f){
        nr = nr*f.dr + dr*f.nr;
        dr = dr*f.dr;
        simplify();
    }
    void multiply(Fraction f){
        nr = f.nr*nr;
        dr = f.dr*dr;
        simplify();
    }
    void simplify(){
        int hcf = gcd(nr,dr);
        nr /= hcf;
        dr /= hcf;
    }
};
int main(){
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.add(f2);
    f1.print();
    f1.multiply(f2);
    f1.print();
    
}