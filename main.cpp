#include <iostream>
#include <stdlib.h>
#include <limits>
#include "Classes/Header_Files/libro.h"
#include "Classes/Header_Files/cliente.h"
#include "Classes/Header_Files/pedido.h"
#include "Classes/Header_Files/detallepedido.h"
#include "Classes/Header_Files/usuario.h"

using namespace std;

//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer
//==============================================================
int fnValidateInteger(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable > 0 && variable < 8)){	
			break;
		}else{
			cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}

//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer para submenu
//==============================================================
int fnValidateIntegerSubmenu(){
	int variable;
	
	while(true){
				
		if(cin >> variable && (variable >= 0 && variable <= 1)){	
			break;
		}else{
			cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}



int main() {
	

	
	
	
	system("pause");
	
	return 0;	
}
