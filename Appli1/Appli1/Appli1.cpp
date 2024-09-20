#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int nombre;

    printf("Entrez un nombre: ");
    scanf_s("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    }
    else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}

