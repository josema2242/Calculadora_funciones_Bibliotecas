#include <iostream>
#include"biblioteca.hpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int n1, n2, resultado, ope;
	cout<<"Bienvenido, ingrese una opcion:" << endl;
	cout<<"1. Suma" << endl;
	cout<<"2. Division" << endl;	
	cout<<"3. Factorial de un Numero" << endl;
	cout<<"4. Salir" << endl;
	cin>>ope;
	

	
	switch (ope) 
	{
		case 1: 
		
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;
			resultado=suma(n1,n2);
			cout<<"El resultado de la suma es: "<< resultado << endl;
			break;
			
		case 2:
			
			cout<<"Ingrese el primer numero"<<endl;
			cin>>n1;
			cout<<"Ingrese el segundo numero"<<endl;
			cin>>n2;
			resultado=division(n1,n2);
			if (resultado==0){
				cout<<"Error, la Division no se puede realizar"<< endl;
			}else{
				cout<<"El resultado de la division es: "<< resultado << endl;
			}
			break;

		case 3: 
			cout<<"Ingrese el numero"<<endl;
			cin>>n1;
			resultado=factorial(n1);
			
			if (resultado==0){
				cout<<"Error, ingrese un numero mayor o igual a 0 para calcular su factorial"<< endl;
			}else{
				cout<<"El factorial del numero "<< n1<<" es: " << resultado<<endl;
			}
			break;
			
		case 4:
			cout<<"Gracias por usar el programa";
			return 0;
			break;
	}
	
	system("pause");
	return 0;
}


