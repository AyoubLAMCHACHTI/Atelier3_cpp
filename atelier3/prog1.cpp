

#include <iostream>
using namespace std;
class MyClass{
    public:
    string nom ;
    public:
    MyClass(){
         cout<<"welcome "<<endl;
    }
    ~MyClass(){
         cout<<"Good bye "<<nom<<endl;
    }
};
int main(int argc, char const *argv[])
{
    MyClass obj1 ;
     cout<<"enter votre nom :";
     cin>>obj1.nom;
    return 0;
}
