#include <iostream>
using namespace std;

//ACTIVIDADES
//ACTIVIDAD 1.
// A)
class Animal {
private:
    string nombre;
    int edad;
    string tipo;

public:
    Animal(string _nombre, int _edad, string _tipo) : nombre(_nombre), edad(_edad), tipo(_tipo) {}

    // para hacer sonidos
    void hacerSonido() const {
        cout << "El " << tipo << " " << nombre << " hace un sonido.\n";
    }

    // para alimentar al animal
    void alimentar() const {
        cout << "Se alimenta al " << tipo << " " << nombre << ".";
    }
};

int main() {
    Animal perro("Fido", 3, "perro");
    Animal gato("Whiskers", 2, "gato");

    perro.hacerSonido();
    perro.alimentar();

    gato.hacerSonido();
    gato.alimentar();

    return 0;
}
//B)
class Coche {
private:
    string modelo;
    int anio;
    int velocidad; 

public:
    Coche(string _modelo, int _anio) : modelo(_modelo), anio(_anio), velocidad(0) {}

    void acelerar(int incremento) {
        velocidad += incremento;
        cout << "El coche acelera a " << velocidad << " km/h.\n";
    }

    void frenar(int decremento) {
        velocidad -= decremento;
        if (velocidad < 0)
            velocidad = 0;
        cout << "El coche frena a " << velocidad << " km/h.\n";
    }

    int obtenerVelocidad() const {
        return velocidad;
    }
};

int main() {
    Coche coche1("Toyota Camry", 2020);
    Coche coche2("Ford Mustang", 2018);

    coche1.acelerar(50);
    coche2.acelerar(70);

    coche1.frenar(20);
    coche2.frenar(30);

    cout << "La velocidad del coche 1 es: " << coche1.obtenerVelocidad() << " km/h.\n";
    cout << "La velocidad del coche 2 es: " << coche2.obtenerVelocidad() << " km/h.";

    return 0;
}
//C)
class Estudiante {
private:
    string nombre;
    int edad;
    int calificacion;

public:

    Estudiante(string _nombre, int _edad) : nombre(_nombre), edad(_edad),calificacion(0) {}
    void tomarExamen(int calif) {
        calificacion = calif;
        cout << "El estudiante " << nombre << " toma el examen con una calificación de " << calificacion << ".\n";
    }
    void calificar() const {
        cout << "La calificación de " << nombre << " es: " << calificacion << ".";
    }
};

int main() {

    Estudiante estudiante1("Juan", 18);
    Estudiante estudiante2("Maria", 17);

    estudiante1.tomarExamen(16);
    estudiante2.tomarExamen(20);

    estudiante1.calificar();
    estudiante2.calificar();

    return 0;
}
//D)
class Tienda {
private:
    string nombre;
    string direccion;
    string tipo;
    int productos;

public:
    Tienda(string _nombre, string _direccion, string _tipo) : nombre(_nombre), direccion(_direccion), tipo(_tipo), productos(0) {}
    void agregarProducto(int cantidad) {
        productos += cantidad;
        cout << "Se agregaron " << cantidad << " productos a la tienda " << nombre << ".\n";
    }
    void venderProducto(int cantidad) {
        if (productos >= cantidad) {
            productos -= cantidad;
            cout << "Se vendieron " << cantidad << " productos en la tienda " << nombre << ".";
        } else {
            cout << "No hay suficientes productos en la tienda " << nombre << " para vender.";
        }
    }
    int obtenerProductos() const {
        return productos;
    }
};

int main() {
    Tienda tienda("Tienda Pablo", "Avenida 456", "Electrónica");

    tienda.agregarProducto(80);

    tienda.venderProducto(70); 

    cout << "Productos en la tienda : " << tienda.obtenerProductos() << endl;

    return 0;
}

//ACTIVIDAD 2.

//ACTIVIDAD 3.

//ACTIVIDAD 4.

    //1.-
/*
class Libro{
    string autor;
    string titulo;
    bool prestam;
    public:
    Libro(string a, string t){ //Public para recibir valores
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
    bl.Presta_libro(libro1); //Envia un objeto
    libro1.del_prestam();

    return 0;
}
*/
   //2.- 

class Producto{
    float precio;
    int cantidad;
    string nombre_prod;
    public:
    Producto(string n ,float p,int c){
        this->precio=p;
        this->cantidad=c;
        this->nombre_prod=n;
    }
    float getPrecio(){ return precio;}
    int getCantidad(){ return cantidad;}
    string getNombre_prod(){ return nombre_prod;}
    void precio_prod(float p){
        precio=p;
    }
    void cant_prod(int c){
        cantidad=c;
    }
};
class Factura{
    public:
    string P[1];
    void Agregar_pro(Producto prod){ //Recibe como parametro un objeto
        P[0]=prod.getNombre_prod();
    }
};

int main(){
    string n;
    float p;
    int c;
    cout<<"Ingrese el nombre del producto "<<endl;
    cin>>n;
    cout<<"Ingrese el precio del producto "<<endl;
    cin>>p;
    cout<<"Ingrese la cantidad del producto "<<endl;
    cin>>c;
    Producto prod(n,p,c);
    Factura fact;
    fact.Agregar_pro(prod);
    cout<<"La lista de productos es: ";
    for (int x=0;x<=0;x++){
        cout<<fact.P[0];
    }
    return 0;
}
