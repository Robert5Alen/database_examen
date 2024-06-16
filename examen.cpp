#include<iostream>
#include<map>
#include<vector>
#include <string>

//Convierte la entrada de cadena en vector

using namespace std;

vector<string> Vect_datos(const string& operacion);

int main()
{

vector<string>data;
string comando;
string fecha;
string evento;

char n;



string str;

cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(true)
{

getline(cin,str);

data=Vect_datos(str);

comando=data[0];
fecha=data[1];
evento=data[2];

if(comando!="Add"&&comando!="Del"&&comando!="Find"&&comando!="Print")
{

cout<<"Unknown command: "<<comando<<endl;
break;

}



if(str=="n")
{

    break;
}
}

    return 0;
}

vector<string> Vect_datos(const string& operacion)
{
string cadena;
vector<string>datos;
int cont=0;


//Encuentra los espacios para separar cadenas y enviarlos a un vector
for(int a=0;operacion.size()>=a;a++)
{

int spc;

if(operacion[a]==' '||operacion[a]==operacion[operacion.size()])
{
cadena.clear();    
spc=a;

for(cont;spc>cont;cont++)
{

cadena+=operacion[cont];


}

datos.push_back(cadena);

}



}

for(auto &ver:datos)
{

cout<<ver<<endl;

}


    return datos;
}