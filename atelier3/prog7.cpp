

#include <iostream>
#include <cmath>

using namespace std;

class vect3d {
    private :
    double x,y,z;
    public :
    vect3d(){
      x=0;y=0;z=0; 
    }
    void afficher(){
        cout<<"les coordonnees cartesiennes sont :("<<x<<" , "<<y<<" , "<<z<<" )";
    }
    vect3d somme(vect3d &v){
        vect3d tmp;
        tmp.x=x+v.x;  tmp.y=y+v.y; tmp.z=z+v.z;
        return tmp;
    }
    double scalaire(vect3d &v){
      
        return x*v.x + y*v.y + z*v.z;
    }
    double Norm(vect3d &u){
        return sqrt(scalaire(u)); // la norme d'une vect est la racine carre 
                                 // de le produit scalaire sur lui mme
    }
    bool equal(vect3d &v){
         if(x==v.x && y==v.y && z==v.z)   return true;
         else return false ;
         
    }
};


int main(int argc, char const *argv[])
{
    vect3d u,v,s;
    s=u.somme(v);
    cout<<"------------------le debut -------------------"<<endl;
    u.afficher();
    cout<<endl;
    u.afficher();
    cout<<endl;
     cout<<u.equal(v);
    cout<<endl;
    return 0;
}
