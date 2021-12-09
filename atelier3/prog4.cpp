

#include <iostream>

using namespace std;
class matrix {
    public :
     int nbr_ligne, nbr_col;
     public:
     void set_dat(){
         nbr_ligne=3;
         nbr_col=3;

     }
     virtual void display(){
         cout<<"je suis la mere ";
     }  

};

class vecteur : public matrix{
    public :
    double coord1, coord2;
    void set_dat(){
       coord1=0;
       coord2=0;
    }

    void display(){
        cout<<"inherited from matrix";
    }   
};
int main(int argc, char const *argv[])
{
     vecteur vect1;
     matrix  matrix1;
     vect1.display();
     cout<<"\n \n";
     matrix1.display();
     cout<<"\n \n";
    return 0;
}

