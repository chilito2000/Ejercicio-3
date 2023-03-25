#include <iostream>
using namespace std;

int main() {
    int edad,num1, num2,num,opcion,factorial,n,i, impar5,dia;
    cout<<"Opciones de Operaciones para el Usuario: ";
    cout<<endl<<"OPERACION 1: MAYOR O MENOR DE EDAD: ";
    cout<<endl<<"OPERACION 2: NUMERO MAYOR O MENOR:";
    cout<<endl<<"OPERACION 3: NUMERO PAR O IMPAR";
    cout<<endl<<"OPERACION 4: FACTORIAL DE UN NUMERO";
    cout<<endl<<"OPERACION 5: NUMERO IMPAR EN RANGO 10 AL 30";
    cout<<endl<<"OPERACION 6: DIA DE LA SEMANA";
    cout<<endl<<"Ingrese la opcion de la operacion que desee realizar: ";
    cin>>opcion;
    switch(opcion) {
        case 1:
            cout << "Ingrese Edad de la persona:  ";
            cin >> edad;
            if (edad >= 18) {
                cout << "Es mayor de edad";
            } else {
                cout << "Es menor de edad";
            }
            break;
        case 2:
            cout << endl << "Ingrese Primer Numero:  ";
            cin >> num1;
            cout << endl << "Ingrese Segundo Numero:  ";
            cin >> num2;
            if (num1 > num2) {
                cout << num1 << " es mayor que " << num2;
            } else if (num2 > num1) {
                cout << num1 << " es Menor que  " << num2;
            } else {
                cout << "Los dos numeros son iguales";
            }
            break;
        case 3:
            cout << endl << "Ingrese un Numero: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << "El Numero es Par";
            } else {
                cout << "El Numero es Impar";
            }
            break;
        case 4:
            cout << "Introduce un numero: ";
            cin >> n;
            factorial=1;
            for(i=1;i<=n;i++)
                factorial = factorial * i;
            cout << endl << "Factorial de " << n << " es: " << factorial << endl;
        case 5:
            cout<<"Ingrese Un Numero: ";
            cin>>impar5;
            if (impar5 >10 && impar5 < 30)
            {
              while(i<=impar5){
                  if (i % 2!= 0){
                      cout<<i<<",";

                  }
                  i++;
              }

            }
           else {
               cout<<"El Numero a Operar no es Valido";
           }
           break;
        case 6:
            cout<<"INGRESE NUMERO PARA DIA DE LA SEMANA";
            cin>>dia;
            switch(dia){
                case 1:
                    cout<<"Dia lunes";
                case 2:
                    cout<<"Dia Martes";
                case 3:
                    cout<<"Dia Miercoles";
                case 4:
                    cout<<"Dia Jueves";
                case 5:
                    cout<<"Dia Viernes";
            }
            break;

    }
        return 0;
    }


