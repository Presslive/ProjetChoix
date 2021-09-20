//But:// Demander à l'utilisateur son choix dans le menu.
// Tant que le choix n'est pas valide le programme le redemande à l'utilisateur
//
// Tant que le choix de l'utilisateur n'est pas de quitter le programme, on affiche le choix en toute lettre.
//
//Auteur:Diallo Abdoulaye
//Date:2021-09-13

#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");
    
     //Declarations des constances
        
    const char min='a';
    const char max='e';

    //Declaration des variables
        char choix;
        int a;
        int b;
        int resultat;

        std::cout << "a- Addition" << std::endl;
        std::cout << "b- Soustraction" << std::endl;
        std::cout << "c- Multiplication" << std::endl;
        std::cout << "d- Division" << std::endl;
        std::cout << "e- Quitter" << std::endl;
        
            cin>>choix;
        
        while (choix !='a' && choix !='b' && choix !='c' && choix !='d' && choix !='e')
        {
            
            system("CLS");
        std::cout << "a- Addition" << std::endl;
        std::cout << "b- Soustraction" << std::endl;
        std::cout << "c- Multiplication" << std::endl;
        std::cout << "d- Division" << std::endl;
        std::cout << "e- Quitter" << std::endl;
        std::cout << "----Entrez le bon choix----" << std::endl;
        cin>>choix; 

       
        }
        
        switch (choix)
        {
        case 'a':
        
            system("CLS");
            std::cout << "Vous avez choisi addition!" << std::endl;
                std::cout << "nombre 1:" ;
                cin>>a;
                std::cout << "nombre 2:" ;
                cin>>b;
                resultat=a+b;
                std::cout << "Resultat= " <<resultat << std::endl;
            break;
            case 'b':
            
            
            system("CLS");
            std::cout << "Vous avez choisi soustraction" << std::endl;
            std::cout << "nombre 1:" ;
                cin>>a;
                std::cout << "nombre 2:";
                cin>>b;
                resultat=a-b;
                std::cout << "Resultat= " <<resultat << std::endl;
                break;
                case 'c':
                 system("CLS");
            std::cout << "Vous avez choisi multiplication" << std::endl;
            std::cout << "nombre 1:";
                cin>>a;
                std::cout << "nombre 2:";
                cin>>b;
                resultat=a*b;
                std::cout << "Resultat= " <<resultat << std::endl;
                break;
                
                case 'd':
                system("CLS");
            std::cout << "Vous avez choisi division" << std::endl;
            std::cout << "nombre 1:" ;
                cin>>a;
                std::cout << "nombre 2:";
                cin>>b;
                resultat=a/b;
                std::cout << "Resultat= " <<resultat << std::endl;
                break;
               

        default: 
        return 0;
            break;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

            
                


        
        
        



    system("pause");
    return 0;
}


