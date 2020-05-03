

#include <iostream>

#include <string>

#include <sstream>

using namespace std;

struct vtas{

  int almacenid;

  int mes;

  float montovendido;

};

int main() {

  int i,n=0;  

  float sumatotal=0,media,mayor;

  string almacenes =" ";

  ostringstream ssal;  //ostringstream

  ostringstream ssmsv;

  ostringstream ssmt;

  cout<<"Cuantos datos almacenara? ";

  cin>>n;

  

  vtas ventas[n];

  /*Ingreso de Datos*/

  	for(i=0;i<n;i++){

    	cout<<"Ingrese Codigo de Almacen: "<<endl;

    	cin>>ventas[i].almacenid;

    	cout<<"Ingrese Mes de la venta: "<<endl;

    	cin>>ventas[i].mes;

    	cout<<"Monto venido: "<<endl;

    	cin>>ventas[i].montovendido;

    	sumatotal=sumatotal+ventas[i].montovendido;

    	system("CLS");

  	}

  	

  	/*Calculo de Media General*/

  	media= sumatotal/n; //float(n);

  	mayor=media;



		  }			  			

  		}

	}

	//Imprisión en pantalla final

	cout<<"Promedio General: "<<media<<endl;

	cout<<"Mayores ventas:   "<<almacenes.substr(0,almacenes.length()-2)<<endl;

	

}
