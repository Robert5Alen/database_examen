#include<iostream>
#include<map>
#include<vector>
#include <string>

using namespace std;


int main()
{

vector<string>datos;
string comando;
string fecha;
string evento;
string cadena;
char n;



string operacion;

cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(true)
{

getline(cin,operacion);
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


if(operacion=="n")
{

    break;
}
}


/*if(operacion!="Add"||operacion!="Del"||operacion!="Find"||operacion!="Print"||operacion!="n")
{

cout<<"Unknown command: "<<operacion<<endl;
break;

}


if(operacion=="n")
{

cout<<"Salida de ejecucion exitosa"<<endl;

break;

}

while( true)
{
 cout<<"Introduce la fecha en formato Año-Mes-Día seguido el evento y para salir n"<<endl;
 
 cin>>fecha;
 cin>>evento;
 
 datos[fecha]=evento;




}*/


    return 0;
}