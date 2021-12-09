#include <iostream>
#include <cmath> // nessaire pour le calcul mathematique
#include  <stdlib.h>  // libray qui contien certain fonction system 
#include <syscall.h>
using namespace std ;
class complexe {
    public :
    double Re,Im;
    public :
    
    void display(){     // sert à afficher le nombre sous le format trivial en math 
       if(Im>0 && Re!=0){
        cout<<Re<<" +i"<<Im<<" "; ///ici le traitement des cas possible pour 
                                    // afficher le bon format 
       }
       if(Im<0 && Re!=0){
         cout<<Re<<" "<<Im<<"i";
       }
       if(Im==0){
           cout<<Re;
       }
       if(Re==0 && Im!=0){
           cout<<Im<<"i";
       }

    }
    
    double module(){  // la fonction chargée de evaluer le module 
        return sqrt(Re*Re+Im*Im);  //formule mathematique pour calculer le module 
                                  // a l'aide de la focntion racine carree  de la biblio cmath 
    }
    
     

};
complexe soustraction(complexe &z1,complexe &z2){ // une foction que prend en arguments 2 complexe 
                                                 // est returne l'objet comlexe qui represente le resultat
         complexe total;
         total.Re=z1.Re-z2.Re;
         total.Im=z1.Im - z2.Im;
         return total;
    }
 complexe produit(complexe &z1,complexe &z2){ // elle prend et return un objet de la classe complexe 
         complexe total; // variable pour stocker le resultat
         total.Re=z1.Re*z2.Re- z1.Im*z2.Im;
         total.Im= (z1.Re*z2.Im) + (z1.Im*z2.Re);
         return total;
    }
complexe somme(complexe &z1,complexe &z2){ // la meme hostoire que les deux precedentes 
         complexe total;
         total.Re=z1.Re+z2.Re;
         total.Im=z1.Im + z2.Im;
         return total;          // elle renvoie un objet complexe 
    }
     

void draw_menu(){  // une fonctio assistante pour reduire la taille de code 
    cout<<"-------------------------------------------"<<endl;
    cout<<"|1. pour afficher le complexe              |"<<endl;
    cout<<"|2. pour calculer le module                |"<<endl;
    cout<<"|3. pour la somme de 2 complexes           |"<<endl;
    cout<<"|4. pour faire la multiplication           |"<<endl;
    cout<<"|0 .pour quitter                           |"<<endl;
    cout<<"____________________________________________"<<endl;
    
}
int main(int argc, char const *argv[])
{ 
    complexe z1,z2,som; // instanciation de la classe complexe 
    int buffer=-1;        // varible qui gere le choix de l'utilisateur 
    
    // boucle while pour donner la chance à l'utilisateur de faire ce qui veut 
    // jusqu'à il antre un  qui correspondant à quitter
    while(buffer != 0){
         draw_menu();     // dessiner le menu 
        cout<<"entrer votre choix :"; // donner la main à enter le choix 
        cin>>buffer;
        switch(buffer){ // traiter les cas possible 
            case 1:cout<<"enter la partie reelle "; //cas 1 appel à la methode afficher()
                   cin>>z1.Re;
                   cout<<"enter la partie imaginaire ";
                   cin>>z1.Im;
                   system("clear"); // la fonction system qui vide l'ecran 
                                    // pour une bonne visualisation 
                                    // si ç marche pas dans le system windows 
                                    // mercid e la remplacer par system("cls")
                   cout<<"votre complexe est :";z1.display();
                   break; // sortor du cas 
            case 2 :cout<<"enter la partie reelle ";
                   cin>>z1.Re;
                   cout<<"enter la partie imaginaire ";
                   cin>>z1.Im;
                   system("clear");
                   cout<<"le module de : ";z1.display();cout<<" est ";cout<<z1.module();
                    break;
            case 3 :cout<<"enter la partie reelle du 1er";
                   cin>>z1.Re;
                   cout<<"enter la partie imaginaire 1er";
                   cin>>z1.Im;
                   cout<<"enter la partie reelle du 2eme";
                   cin>>z2.Re;
                   cout<<"enter la partie imaginaire 2eme";
                   cin>>z2.Im;
                   som=somme(z1,z2);
                   system("clear");
                   cout<<"la somme de ";z1.display();cout<<"+";z2.display();cout<<" = ";som.display();
                   break;
            case 4 :cout<<"enter la partie reelle du 1er";
                   cin>>z1.Re;
                   cout<<"enter la partie imaginaire 1er";
                   cin>>z1.Im;
                   cout<<"enter la partie reelle du 2eme";
                   cin>>z2.Re;
                   cout<<"enter la partie imaginaire 2eme";
                   cin>>z2.Im;
                   som=produit(z1,z2);
                   system("clear");
                   cout<<"la somme de ";z1.display();cout<<"+";z2.display();cout<<" = ";som.display();
                   break;
            default :if(buffer != 0){
                     system("clear"); // un nombre hors de la liste indique une erreur 
                     cout<<"erreur de frappe merci d'enter un nombre existe ";
                    }
        }
        cout<<endl; // retour à la ligne pour afficher le menu sous le resulat 
        
        
    }
    cout<<"Au revoir "<<endl;    // fin du programme a cause d'un saise de la valeur 0 
     
    return 0;
}
