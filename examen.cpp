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
string str;



cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(true)
{

getline(cin,str);

data=Vect_datos(str);

comando=data[0];
fecha=data[1];


if(str=="n")
{

    break;
}

if(comando!="Add"&&comando!="Del"&&comando!="Find"&&comando!="Print")
{

cout<<"Unknown command: "<<comando<<endl;
break;

}




string iter;
for(int rept=0;rept<fecha.size();rept++ )
{

if (rept==0 && fecha[0]=='-')
{

anio+='-';
continue;

}

if(fecha[rept]=='-'&&fecha[rept+1]=='-')
{

if(fecha.size()/rept>=2)
{

month+='-';


}

if(fecha.size()/rept<=1)
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

}

if(!iter.empty())
{
fechas.push_back(iter);

}

cout<<"\n"<<anio<<endl;
cout<<month<<endl;
cout<<day<<endl;


for(string datp:fechas)
{

cout<<datp<<endl;

}

cout<<fechas.size()<<endl;

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

if(cadena[0]==' ')
{

cadena.erase(0,1);

}

datos.push_back(cadena);

}


}

    return datos;
}