º#include <stdio.h>

void encender(){
    printf("Encendido\n");
}
void apagar(){
    printf("Apagado\n");
}
int main(){
    int opcion;
    do{
        printf("Ingresa 1 para encender o 0 para apagar: ");
        scanf("%d",&opcion);
        if (opcion==1){
            encender();
        } else if (opcion==0){
            apagar();
        } else {
            break; 
        }
        for (int i=0; i<1; i++);
    } while (1);

    return 0;
}
