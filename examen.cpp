#include<iostream>
#include<map>
#include<vector>
#include <string>
#include <algorithm>


using namespace std;
 
 struct Fecha_df{

 };



//Convierte la entrada de cadena en vector
vector<string> Vect_datos(const string& operacion);


//Convierte la fecha a vector
vector<string> Vect_fecha(const string& dates,string& anio,string& month, string& day);

//Verifica si el formato de fecha es correcto
bool Ver_form(string& anio,string& month, string& day,string& fecha);



int main()
{

map<string,vector<string>> pares;
vector<string>data;
vector<string>fechas;
string comando;
string fecha;
vector<string> evento;
string anio;
string month;
string day;
string str;



cout<<"Presione la operacion a realizar o n para salir : "<<endl<<endl;

cout<<"El formato debe ser el siguienteseparados por espacion: Comando Fecha(Año-Mes-Día) Evento"<<endl;

while(true)
{

getline(cin,str);

if(str=="n")
{

    break;
}

data=Vect_datos(str);

comando=data[0];
fecha=data[1];



 try {
     
int a=stoi(data[1]);

        
    } catch (const exception& e) {
        
        cerr << "Wrong date format: "<< fecha<<endl<<endl;
        break;
    }

if(comando!="Add"&&comando!="Del"&&comando!="Find"&&comando!="Print")
{

cout<<"Unknown command: "<<comando<<endl;
break;

}




fechas=Vect_fecha(fecha,anio,month,day);

anio+=fechas[0];
month+=fechas[1];
day+=fechas[2];



if(Ver_form(anio,month,day,fecha)==false)
{

    break;
}
int anio_num=stoi(anio);
int month_num=stoi(month);
int day_num=stoi(day);  

if(month_num>12||month_num<0)
{

cout<<"Month value is invalid: "<<month_num<<endl;
break;

}

if(day_num>31||day_num<0)
{

cout<<"Day value is invalid: "<<month_num<<endl;
break;

}

cout<<"\n"<<anio_num<<endl;
cout<<month_num<<endl;
cout<<day_num<<endl;

if(comando=="Add")
{

evento.push_back(data[2]);

for(const auto& m:pares)
{
    
if(fecha!=m.first)
{
evento.clear();
evento.push_back(data[2]);
}

else{
evento.clear();
for(string asing:m.second)
{
    if(asing==data[2])
    {
        continue;
    }
    
evento.push_back(asing);

}

evento.push_back(data[2]);

}

}


pares[fecha]=evento;


}

else if(comando=="Del")
{
    
if (data.size()==3)
{

auto& vec = pares[fecha];
int tam_vect=vec.size();
vec.erase(remove(vec.begin(), vec.end(),data[2]), vec.end());

if(vec.size()==tam_vect)
{

cout<<"Event not found"<<endl;

}
else{

cout<<"Deleted successfully"<<endl;

}

}

else if(data.size()==2)
{

auto& vect= pares[fecha];
int tam=vect.size();

vect.erase(vect.begin(),vect.end());

cout<<"Deleted "<<tam<< " events"<<endl;


}

for(const auto& iter:pares)
{
cout<<iter.first<<" ";

for(string l:iter.second)
{
cout<<l<<" ";

}

cout<<endl;

}
}

else if(comando=="Find")
{

auto& orden=pares[fecha];

sort(orden.begin(),orden.end());

for(const string& y:orden)
{

cout<<y<<" ";

}
cout<<endl;
}

else if(comando=="Print")
{



    
}

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


bool Ver_form(string& anio,string& month, string& day,string& fecha)
{

   try {
     
int anio_num=stoi(anio);
int month_num=stoi(month);
int day_num=stoi(day);

return true;
        
    } catch (const exception& e) {
        
        cerr << "Wrong date format: "<< fecha<<endl<<endl;
        return false;
    }



}
     
    


    
