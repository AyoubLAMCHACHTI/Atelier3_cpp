#include <iostream>
using namespace std;
class shape{
    public:
    double largeur,hauteur;
    public:
    shape(double x,double y){
          largeur=x; hauteur=y;
    }
    double area(){
        return largeur * hauteur;
    }
    
};
class triangle :public shape{
    public :
    double base ;
    double largeur,hauteur;
    public :
        triangle (double a, double b ,double c){
        largeur =a;
        hauteur=b;
        base=c;
       }
    double area(){
        return (base*hauteur)/2;
    }
};
class rectangle :public shape{
    public :
     double largeur,hauteur;
    public:
     rectangle(double x,double y){
        largeur=x;hauteur=y;
     }
};
int main(int argc, char const *argv[])
{
    //shape tst(20,6.8);
    triangle abc(7,10,20.5);
    cout<<abc.area()<<endl;
    return 0;
}
