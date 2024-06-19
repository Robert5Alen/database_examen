#include<iostream>
#include<map>
#include<vector>
#include <string>


using namespace std;

//Convierte la entrada de cadena en vector
vector<string> Vect_datos(const string& operacion);


//Convierte la fecha a vector
vector<string> Vect_fecha(const string& dates,string& anio,string& month, string& day);

bool isNumber(const string& fecha);


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

if(!isNumber(fecha))
{
cerr<<"Wrong date format: "<<fecha<<endl;
break;
}


fechas=Vect_fecha(fecha,anio,month,day);

anio+=fechas[0];
month+=fechas[1];
day+=fechas[2];



int anio_num=stoi(anio);
int month_num=stoi(month);
int day_num=stoi(day);

cout<<"\n"<<anio_num<<endl;
cout<<month_num<<endl;
cout<<day_num<<endl;

cout<<fecha<<endl;


anio.clear();
month.clear();
day.clear();
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

vector<string> Vect_fecha(const string& dates,string& anio,string& month, string& day)
{
string iter;
vector<string> func2;

for(int rept=0;rept<dates.size();rept++ )
{

if (rept==0 && dates[0]=='-')
{

anio+='-';
continue;

}

if(dates[rept]=='-'&&dates[rept+1]=='-')
{

if(dates.size()/rept>=2)
{

month+='-';


}

if(dates.size()/rept<=1)
{

day+='-';


}


}


if(dates[rept]=='-')
{

if(!iter.empty())
{
func2.push_back(iter);
iter.clear();
}



}

else{

iter+=dates[rept];

}

}

if(!iter.empty())
{
func2.push_back(iter);

}


return func2;

}


bool isNumber(const string& fecha) {
    for (char c : fecha) {
        if (!isdigit(c) && c != '-' && c != '+') {
            return false;
        }
    }
    return true;
}