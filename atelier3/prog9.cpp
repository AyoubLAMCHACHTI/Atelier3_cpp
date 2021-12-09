#include <iostream>

using namespace std ;
class personne {
    public:
     string nom ;
     
     void display(){
          static int counter=1;
          
         cout<<"bonjour "<<nom<<" pour "<<counter<<"fois"<<endl;
        counter++;
        
     }
};
int main(int argc, char const *argv[])
{
    personne p;
    cout<<"enter votre nom :";
    cin>>p.nom;
    p.display();
    p.display();
    p.display();
    return 0;
}


