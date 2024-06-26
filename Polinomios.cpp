
#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout<< "Introduce el numero de polinomios: "; 
	cin >> m;
	cout<< "Introduce el mayor grado aceptado: "; 
	cin >> n;
	
	// RESERVANDO MEMORIA DINAMICAMENTE PARA MATRIZ DE POLINOMIOS
	int **arreglo = new int*[m];
	for (int i = 0; i < m; i++) {
	    arreglo[i] = new int[n];
	}

	// RESERVANDO MEMORIA DINAMICAMENTE PARA VECTOR RESULTADO
 	int *result = new int[n];
 
	// LECTURA DE LA MATRIZ DE POLINOMIOS
	for (int i = 0; i <m; i++) {
		cout<< "Introduzca valores para el polinomio: " << i+1 << "\n"; 
	    for (int j = 0; j <=n; j++) {
	    	cout<< "Coeficiente: " << n-j << "\n"; 
	        cin >> arreglo[i][j];
	    }
	}

	// SUMA DE LOS POLINOMIOS
	for (int j = 0; j <=n; j++) {
		int suma=0;
	    for (int i = 0; i <m; i++) {
	    	suma = suma + arreglo[i][j];
	    result[j]= suma;
	    }
	}

	// IMPRESION DE MATRIZ LEIDA
	for (int i = 0; i <m; i++) {
		cout<< "\npolinomio: " << i << "\n"; 
	    for (int j = 0; j <=n; j++) {
	    	if (j!=n)
	    		cout<< arreglo[i][j] << "x^" << n-j << " + "; 
	    	else
	    		cout<< arreglo[i][j]; 
	    }
	}
	
	// IMPRESION DEL VECTOR DE RESULTADO
	cout<< "\n\nEl polinomio resultado es: \n"; 
    for (int i = 0; i <=n; i++) {
    	if (i!=n)
    		if (result[i]<0)
    			if (i!=0)
    				cout<< " - " << -1*result[i] << "x^" << n-i; 
    			else
    				cout<< -1*result[i] << "x^" << n-i; 
    		else
    			if (i!=0)
    		    	cout<< " + " << result[i] << "x^" << n-i; 
    		    else
    		    	cout<< result[i] << "x^" << n-i; 
    	else
    		//cout<< " " << result[i]; 
			if (result[i]<0)
    			if (i!=0)
    				cout<< " - " << -1*result[i]; 
    			else
    				cout<< -1*result[i]; 
    		else
    			if (i!=0)
    		    	cout<< " + " << result[i]; 
    		    else
    		    	cout<< result[i]; 
    }
	
    return 0;
}
