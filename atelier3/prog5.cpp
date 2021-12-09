

#include <iostream>
using namespace std;
// definition de la class 
class animal {
    public :
    string nom;
    int age ;
    public :
    void set_data(string nom , int age ){
        this->nom=nom ; this->age=age;

    }

};

// la class fille 1

class dolphin : public animal {
     public : 
     void message(){
         cout<<"je vis dans l'oceon atlantic mon age est "<<age;
     }
};
class zebra : public animal {
     public : 
     void message(){
         cout<<"this zebra comes from moddle africa , he is "<<age;
     }
};



int main(int argc, char const *argv[])
{
     dolphin D;
     zebra zebra_afrique;
     cout<<"\n----------------------------------------------------------------------\n";
     D.set_data("delpho ",6);
     D.message();
     cout<<"\n";
     zebra_afrique.set_data("zebraA ",11);
     zebra_afrique.message();
     cout<<"\n";
    return 0;
}



