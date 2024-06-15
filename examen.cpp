#include<iostream>
#include<map>
#include<vector>
#include <string>

using namespace std;

struct comp_events{
 


};



void print(vector<string> d);

vector <string> add(vector<string> b);

vector <string> del(vector<string> c);



int main()
{

vector<string>datos;
string comando;
string fecha;
string evento;
string cadena;
char n;

    
 map<string, string> datos;   
 map<string,string>::iterator i;

string operacion;

cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(cin>>operacion)
{
int cont=0;

for(int a=0;operacion.size()>a;a++)
{

int spc;
if(operacion[a]==' ')
{
spc=a;

for(cont;spc>cont;cont++)
{

cadena+=operacion[cont];

}


}



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