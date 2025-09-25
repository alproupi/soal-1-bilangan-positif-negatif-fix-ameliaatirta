#include <stdio.h>
#include <stdlib.h>

int main(){
    int bilangan;


    //input
    printf ("Masukkan bilangan : ");
    scanf ("%d", &bilangan);

    if (bilangan > 0) {
        printf ("bilangan positif");
    }else if (bilangan == 0){
        printf ("nol");
    }else {
        printf ("bilangan negatif");
    }
    return 0;
}