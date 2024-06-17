#include<iostream>
#include<map>
#include<vector>
#include <string>


using namespace std;

//Convierte la entrada de cadena en vector
vector<string> Vect_datos(const string& operacion);



void Add( );

int main()
{

map<string,vector<string>> pares;
vector<string>data;
vector<string>fechas;
string comando;
string fecha;
vector<string> evento;
string anio;
char n;
string month;
string day;
bool compara;


string str;

cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(true)
{

getline(cin,str);

data=Vect_datos(str);

comando=data[0];
fecha=data[1];


if(comando!="Add"&&comando!="Del"&&comando!="Find"&&comando!="Print")
{

cout<<"Unknown command: "<<comando<<endl;
break;

}
int num=1;
int guion=0;
string iter;
for(int rept=0;rept<fecha.size();rept++ )
{

if (fecha[0]=='-')
{

anio+='-';
continue;

}

if(fecha[rept]=='-'&&fecha[num]=='-')
{

if(fecha.size()/rept>=2)
{

month+='-';


}

if(fecha.size()/rept>=1)
{

day+='-';


}


}


if(fecha[rept]=='-')
{

if(!iter.empty())
{
fechas.push_back(iter);
iter.clear();
}


}

else{

iter+=fecha[rept];

}

if(!iter.empty())
{
fechas.push_back(iter);

}

num++;
}



if(comando=="Add")
{




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