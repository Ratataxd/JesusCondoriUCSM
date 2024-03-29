#include <iostream>
using namespace std;

//ACTIVIDADES
//ACTIVIDAD 1.


//ACTIVIDAD 2.

//ACTIVIDAD 3.

//ACTIVIDAD 4.

    //1.-
class Libro{
    string autor;
    string titulo;
    bool prestam;
    public:
    Libro(string a, string t){
        this->autor=a;
        this->titulo=t;
    }
        string getAutor(){
            return autor;
        }
        string getTitulo(){
            return titulo;
        }
        void setPrestam(bool p){
            prestam=p;
        }
        void del_prestam(){
            cout<<"Se devolvio el libro"<<endl;
            prestam=false;
        }
    
};
class Biblioteca{
    public:
    bool Presta_libro( Libro libro){
        cout<<"Se presto el libro "<<libro.getTitulo()<<" de "<<libro.getAutor()<<endl;
        libro.setPrestam(true);
        return true;
    }
};

int main(){
    Libro libro1("Miguel De Cervantes","Don Quijote de la Mancha");
    Biblioteca bl;
    bl.Presta_libro(libro1);
    libro1.del_prestam();

    return 0;
}

   //2.- 
