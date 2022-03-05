#include"biblioteca.hpp"

int suma(int a, int b){
	return a+b;
}

int factorial(int a){
		if (a<0){
		return 0;
 		}else{
 			int factor = 1;
			for (int i=1; i<=a; i++ ){
			factor=factor*i;
		}
		return factor;
		}	
	}




int division(int a, int b){
	if(a>b && b>0){
		return a/b;
	}else{
		if(b>a && a>0){
			return b/a;
		}else{
		return 0;
		}		
	return 0;
	} 
}




