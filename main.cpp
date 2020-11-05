/*
    Arantxa Palacios Jara
*/


#include "bruteforce.h"
#include "boyemoore.h"
#include "kmp.h"
#include "heapsort.h"
#include "radixsort.h"
#include "showorder.h"

// Boyer Moore
#define NO_OF_CHARS 256

using namespace std;


int main() {
    int option;
    int i, j;  // Contador para el for
    int num;    // Guarda numero random


    do {
        system("cls"); // Para limpiar pantalla

        cout << "Menu" << endl
             << "\t\tBusquedas en cadenas" << endl
             << "1. Fuerza Bruta" << endl
             << "2. Boyer Moore" << endl
             << "3. KMP" << endl
             << "\t\tAlgoritmos de ordenamiento" << endl
             << "4. Heap Sort" << endl
             << "5. Radix Sort" << endl
             << "6. Salir" << endl;

        cout << "Ingrese una opcion: " << endl;
        cin >> option;

        switch (option)  {

            case 1:

            {
                string pattern, text;

                cin.ignore();
                getline(cin, text, '\n');

                getline(cin, pattern, '\n');

                bruteForce(text, pattern);
            }

            break;

            case 2:
            {
                string pattern, text;

                cin.ignore();
                getline(cin, text, '\n');

                getline(cin, pattern, '\n');

                BoyerMoore(text, pattern);
            }
            break;

            case 3:
            //KMP
            {
                string pattern, text;

                cin.ignore();
                getline(cin, text, '\n');

                getline(cin, pattern, '\n');

                KMPSearch(text, pattern);
            }

            break;

            case 4:
            {
                int arraySize;

                cin >> arraySize;
                int* numbers = new int[arraySize];

                for (int i = 0; i < arraySize; i++)
                    cin >> numbers[i];

                HeapSort(numbers, arraySize - 1);
                show(numbers, arraySize); // for printing

                delete[] numbers;
            }
            break;

            case 5:
            {
                int arraySize;

                cin >> arraySize;
                int* numbers = new int[arraySize];

                for(int i =0; i < arraySize; i++)
                    cin>>numbers[i];

                radixsort(numbers, arraySize);
                show(numbers, arraySize);// for printing

                delete[] numbers;
            }
            break;
        }
        system("PAUSE");
    } while (option != 6); // Salida
    return 0;
}


/*
    Bibliografía
    Drozdek, A. (2012). Data Structures and algorithms in C++. Cengage Learning.
*/

