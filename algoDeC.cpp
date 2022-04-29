#include <iostream>
#include <string>
#include <typeinfo>
#include <limits>
using namespace std;
const float PI = 3.1416;
void ignoreLine(){
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}
bool numeroPuro( string stringo ){
    for ( int i = 0; i < stringo.length(); i++){
        cout << "\nEntraste y esta todo bien" << stringo[i];
        if(isdigit(stringo[i]) == false){
            cout << "Entraste a un lugar muy feo DE ACA";
            return false;
        }
        return true;
    }
}
int ejercicio1 ( void ){
    int opcion;
    int A, b, c, d, e, f, a, x, y;

    cout << "\n- - - Ejercicio 1 - - -\n" << endl;
    cout << "Para realizar la demostracion ingrese dos numeros naturales\n";
    cout << "Primer numero x: ";
    cin >> x;
    cout << "Segundo numero a: ";
    cin >> a;
    y = (a * (x * x * x)) + 7;
    cout << "\nEl valor de y de la ecuacion de y = ax^3 + 7, con los datos ingresados es: " << y;
    cout << "\nEntonces, podemos inferir que:";
    printf("\na. %d =? %d * %d * %d * %d + 7 = %d - Sentencia correcta para la ecuacion", y, a, x, x, x, a * x * x * x + 7);
    printf("\nb. %d =? %d * %d * %d * (%d + 7) = %d", y, a, x, x, x, a * x * x * (x + 7));
    printf("\nc. %d =? (%d * %d) * %d * (%d + 7) = %d", y, a, x, x, x, (a * x) * x *( x + 7));
    printf("\nd. %d =? (%d * %d) * %d * %d + 7 = %d - Sentencia correcta para la ecuacion", y, a, x, x, x, (a * x) * x * x + 7);
    printf("\ne. %d =? %d * (%d * %d * %d) + 7 = %d - Sentencia correcta para la ecuacion", y, a, x, x, x, a * (x * x * x) + 7);
    printf("\nf. %d =? %d * (%d * %d * %d + 7) = %d", y, a, x, x, x, a * (x * x * x + 7));
    //Preguntamos sí queremos volver al menu o salir
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio1();
    }
    return opcion;
}
int ejercicio2 ( void ){
    int opcion;
    float a, b;
    cout << "\n- - - Ejercicio 2 - - -\n" << endl;
    cout << "Se mostrara la suma, resta, producto y division de dos numeros que ingrese\n";
    cout << "Primer numero x: ";
    cin >> a;
    cout << "Segundo numero a: ";
    cin >> b;
    while ( b == 0){
        cout << "\nLa division por 0 no esta admitida en reales\nReingrese el valor a: ";
        cin >> b;
    }
    cout << "\nLa suma es: " << a << " + " << b << " = " << a + b
        <<"\nLa resta es: " << a << " - " << b << " = " << a - b
        <<"\nEl producto es: " << a << " * " << b << " = " << a * b
        <<"\nLa division es: " << a << " / " << b << " = " << a / b;
    //Preguntamos sí queremos volver al menu o salir
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio2();
    }
    return opcion;
}
int ejercicio3 ( void ){
    int opcion;
    cout << "\n- - - Ejercicio 3 - - -\n" << endl;
    cout << "Se mostrara 3 maneras de imprimir 1-2-3-4 (en la consola no se vera la diferncia).";
    cout << "\n1 - 2 - 3 - 4";
    cout << "\n1 -" << " 2 -" << " 3 -" << " 4";
    cout << "\n1 -"
        <<" 2 -"
        <<" 3 -"
        <<" 4";
    //Preguntamos sí queremos volver al menu o salir
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio3();
    }
    return opcion;
}
int ejercicio4 ( void ){
    int opcion, a, b, c;
    cout << "\n- - - Ejercicio 4 - - -\n" << endl;
    cout << "Ingrese tres valores";
    cout << "\nPrimer valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Tercer valor: ";
    cin >> c;
    cout << "\nLa suma es: " << a + b + c;
    cout << "\nEl promedio es: " << (a + b + c)/3;
    cout << "\nEl producto: " << a * b * c;
    int arrayo[] = {a, b, c};
    int size = *(&arrayo + 1) - arrayo;
    int masGrande;
    int masChico;
    for(int i = 0; i < size; i++ ){
        for( int j = i + 1; j < size; j++){
            if(arrayo[i] < arrayo[j]){
                arrayo[i] = arrayo[i] + arrayo[j];
                arrayo[j] = arrayo[i] - arrayo[j];
                arrayo[i] = arrayo[i] - arrayo[j];
            }
        }
    }
    cout << "\nEl mayor numero ingresado es: " << arrayo[0];
    cout << "\nEl menor numero ingresado es: " << arrayo[size - 1];
    cout << endl;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio4();
    }
    return opcion;
}
int ejercicio5 ( void ){
    int opcion, radio;
    cout << "\nIngrese el radio de un circulo: ";
    cin >> radio;
    cout << "El diametro del radio ingresado es: " << radio * 2 << endl;
    cout << "La circunferencia del radio ingresado es: " << 2 * radio * PI << endl;
    cout << "El area del radio ingresado es: " << radio * radio * PI << endl;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio5();
    }
    return opcion;
}
int ejercicio6 ( void ){
    int opcion;
    cout << "\nSe mostrara lo solicitado"
        <<"\na.";
        std::cout << "*\n*\n***\n****" <<std::endl;
    cout << "\nb.";
        std::cout<<'A';
    cout << "\nc.";
        std::cout<< static_cast<int>('A');
    cout << "\nDato: statick_cast es un conversor de tipo de datos, por eso muestra en sistema decimal el valor del caracter A." << endl;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio6();
    }
    return opcion;
}
int ejercicio7 ( void ){
    int opcion;
    for ( int i = 1 ; i < 11; i++){
        cout << "Numero: " << i << " - Su cuadrado es: " << i*i << " - Su cubo es: " << i*i*i << endl;
    }
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio7();
    }
    return opcion;
}
int ejercicio8 ( void ){
    int opcion;
    int cincoDigitos;
    cout << "\nIngrese su numero de 5 digitos, no mas, no menos: ";
    if(!(cin >> cincoDigitos)){
        std::cin.clear();
        ignoreLine();
        cout << "\nINGRESASTE UN CARACTER Y ESPERABA UN ENTERO - - - Este error me consumio 3 horas :c\n";
        ejercicio8();
    }
    if((cincoDigitos > 9999) && (cincoDigitos < 100000) && (typeid(cincoDigitos).name() == typeid(int).name())){
        int primerDig = cincoDigitos / 10000;
        int segundoDig = (cincoDigitos % 10000) / 1000;
        int tercerDig = (cincoDigitos % 1000) / 100;
        int cuartoDig = (cincoDigitos % 100) / 10;
        int quintoDig = (cincoDigitos % 10) / 1;

        cout << "\nPrimer digito: " << primerDig;
        cout << "\nSegundo digito: " << segundoDig;
        cout << "\nTercer digito: " << tercerDig;
        cout << "\nCuarto digito: " << cuartoDig;
        cout << "\nQuinto digito: " << quintoDig << endl;
        //Preguntamos sí queremos volver al menu o salir
        system("pause");
        cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
            << "Volver al menu: 1\n"
            << "Salir: 0\n"
            << "Repetir: 2\n";
        cout << "Opcion ingresada: ";
        cin >> opcion;
        if(opcion == 2){
            opcion = ejercicio8();
        }
        return opcion;   
    } else {
        cout << "\n- - - - - ERROR! NO SE INGRESO UN NUMERO ENTERO DE 5 DIGITOS - - - - - MAL AHI\n";
        ejercicio8();
    }    
}
int ejercicio9 ( void ){
    int opcion;
        //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio9();
    }
    return opcion;
}
int ejercicio10 ( void ){
    int opcion;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio10();
    }
    return opcion;
}
int ejercicio11 ( void ){
    int opcion;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio11();
    }
    return opcion;
}
int ejercicio12 ( void ){
    int opcion;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio12();
    }
    return opcion;
}
int ejercicio13 ( void ){
    int opcion;
    //Preguntamos sí queremos volver al menu o salir
    system("pause");
    cout << "\n\nDesea volver al menu, repetir el ejercicio o salir?\n"
        << "Volver al menu: 1\n"
        << "Salir: 0\n"
        << "Repetir: 2\n";
    cout << "Opcion ingresada: ";
    cin >> opcion;
    if(opcion == 2){
        opcion = ejercicio13();
    }
    return opcion;
}
int mostrarConsignas( void ){
    int opcion;
    cout << "\nEjercicios de 'algo en c', si desea salir ingrese 0\nConsignas:" << endl;
    cout << "1. Cual de las siguientes sentencias son correctas para la ecuacion algebraica y=ax^3 + 7?\n";
    cout << "y = a * x * x * x + 7\n"
            <<"y = a * x * x * (x + 7)\n"
            <<"y = (a * x) * x * ( x + 7)\n"
            <<"y = (a * x) * x * x + 7\n"
            <<"y = a * (x * x * x) + 7\n"
            <<"y = a * (x * x * x + 7)" << endl;
    cout << "\n2. Escriba un programa que pida al ususrio dos numeros e informe la suma, la resta, el producto y el cociente de los mismos" << endl;
    cout << "\n3. Imprima un programa que imprima los numeros del 1 al 4 en una misma linea, hagalo de las formas siguientes:"
            << "\na.Utilizando un solo operador de insercion de flujo"
            << "\nb.Una unica sentencia con 4 operadores de insercion de flujo"
            << "\nc.Utilizando cuatro sentencias" << endl;
    cout << "\n4. Escriba un programa que reciba tres pumeros por el teclado e emprima la suma, el promedio, el producto, el mayor y"
        <<" el menor de esos numeros. Escriba un adecuado dialogo en pantalla." << endl;
    cout << "\n5.Escriba un programa que reciba un numero que reciba un numero que represente "
        <<"el radio de un circulo e imprima el diametro, circunferencia y area." << endl;
    cout << "\n6.Imprima el codigo:"
        << "\na.std::cout<<*\\n*~\\n***\\n****<<std::endl;"
        << "\nb.std::cout<<('A');" 
        << "\nc.std::cout<< static_cast<int>('A');" << endl;
    cout << "\n7.Utilizando solo lo que hemos desarrollado en esta introduccion, escriba un programa que calcule los cuadrados"
        << "y los cubos de los numeros de 0 a 10 y los muestre por pantalla" << endl;
    cout << "\n8.Escriba un programa que reciba un numero entero de 5 digitos, que separe el numero "
        << "en sus digitos y los muestre por pantalla, uno por linea, comenzando por el mas "
        << "significativo en la primera linea." << endl;
    cout << "\nOpcion elegida: ";
    cin >> opcion;
    return opcion;
}    
int opcionElegida( int opcionElegida ){
    switch (opcionElegida)
    {
        case 1:
        return ejercicio1(); 
        break;

        case 2:
        ejercicio2();
        break;

        case 3:
        ejercicio3();
        break;

        case 4:
        ejercicio4();
        break;

        case 5:
        ejercicio5();
        break;

        case 6:
        ejercicio6();
        break;

        case 7:
        ejercicio7();
        break;

        case 8:
        ejercicio8();
        break;

        case 0:
        cout << "\nGracias";
        return 0;
        break;

        default:
        cout << "\nOpcion no valida, se saldra\nGracias!";
        return 0;
        break;
    }
}

int main (void) {
    int opcion = 1;
    while(opcion != 0){
            opcion = mostrarConsignas();
            opcion = opcionElegida(opcion);
    }
    return 0;
}
