#include <iostream>

using namespace std;
/*La funcion muestra el menu y valida la entrada
que sea un valor correcto
retorna la opcion elegida por el usuario
*/
int menu();
int factorial(int);

int main(){
  bool salir = false;
  while(!salir){
	switch( menu() ){
	    case 1:{//si creo variables aqui uso llaves
		    int num1,num2;
		    cout<<"Escriba un numero: ";
		    cin>>num1;
            cout<<"Escriba un numero: ";
		    cin>>num2;
		    cout<<"El resultado es: "<<num1*num2<<endl;


			break;
		}
		
		case 2:{
			int num1,num2;
			cout<<"Ingrese un numero: ";
			cin>>num1;
			cout<<"Ingrese un numero: ";
			cin>>num2;
			cout<<"El resultado es: "<<num1+num2<<endl;
                    
			
			break;
		}
		case 3:{
			int num;
			cout<<"Ingrese un numero: ";	
			cin>>num;
			cout<<"El factorial de "<<num <<"es: "<<factorial(num)<<endl;
			break;
		}
		case 4:
			salir = true;
			break;
	}
    }
  return 0;
}

int menu(){
  int opcion;
  bool valido = false;
  do{
    cout<<"       MENU"<<endl
        <<"1. Multiplicar dos numeros"<<endl
	<<"2. Sumar dos numeros"<<endl
	<<"3. Calcular factorial"<<endl
	<<"4. Salir"<<endl;

    cout<<"Ingrese una opcion: ";
    cin>>opcion;

    if(opcion > 0 && opcion <5){
	valido = true;
    }else{
	cout<<"Opcion no valida, intente de nuevo..."<<endl;    
    }
  }while(!valido);
   return opcion;

}
int factorial(int x){
    //prueba de github
	if(x == 1){
		return 1;
	}else{
	return x*factorial(x-1);
	}
}
