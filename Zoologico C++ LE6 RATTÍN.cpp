#include <iostream>
using namespace std;

class Leon {
    public:
    void rugir(){
        cout<< "El leon en un zoologico ruge"<<endl;
    }
    void correr(){
        cout<< "El leon en un zoologico tambien corre"<<endl;
    }
};

class Conejo{
    public:
    void saltar(){
        cout<< "El conejo suele saltar constantemente"<<endl;
    }
    void cavar(){
        cout<< "El conejo aunque este en el zoologico tiene donde cavar madrigueras"<<endl;
    }
};

class Hipopotamo{
    public:
    void nadar(){
        cout<< "El hipopotamo nada en su habitad dentro del zoologico"<<endl;
    }
    void cuidar(){
        cout<< "El hipopotamo dedica parte de su tiempo en cuidar a sus crias"<<endl;
    }
};

class Loro{
    public:
    void volar(){
        cout<< "El loro vuela entre arboles"<<endl;
    }
    void hablar(){
        cout<< "El loro tiene el don de hablar con los turistas del zoologico"<<endl;
    }
};

class Zoologico {         //clase base
public:
    Leon Leo1;
    Conejo Cone1;
    Hipopotamo Hipo1;
    Loro Loro1;
    
};

int main(){
    Zoologico ZooCampana;
    cout<< "Seleccione un animal que se pueda ver en un zoologico para conocer sus caracteristicas principales:\n1= Leon, \n2= Conejo, \n3= Hipopotamo, \n4= Loro\n";
    int opcion;
    cin>>opcion;
    switch (opcion){
        case 1:
            cout<<"Aca se muestran las caracteristicas principales del Leon: "<<endl;
            ZooCampana.Leo1.rugir();
            ZooCampana.Leo1.correr();
            break;
        case 2:
            cout<<"Aca se muestran las caracteristicas principales del Conejo: "<<endl;
            ZooCampana.Cone1.saltar();
            ZooCampana.Cone1.cavar();
            break;
        
        case 3:
            cout<<"Aca se muestran las caracteristicas principales del Hipopotamo: "<<endl;
            ZooCampana.Hipo1.nadar();
            ZooCampana.Hipo1.cuidar();
            break;
        case 4:
            cout<<"Aca se muestran las caracteristicas principales del Loro: "<<endl;
            ZooCampana.Loro1.volar();
            ZooCampana.Loro1.hablar();
            break;
        default:
            cout << "La opcion seleccionada no es valida." << endl;
    }
        
    return 0;
}
