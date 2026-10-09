# include <iostream>
# include <string>
using namespace std;
class Pokemon{ // user defined data type
public:
    string name;
    string type;
    int hp;
    Pokemon(string name,string type,int hp){
        this->name = name;
        this->type = type;
        this->hp = hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p1("Pikachu","Electric",70);
    p1.print();
    Pokemon p2("Charizard","Fire",120);
    p2.print();
    Pokemon p3("Mewto","Psychic",200);
    p3.print();

}   