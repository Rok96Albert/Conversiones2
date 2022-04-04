#include <stdio.h>

int main(){

    int segundos;

    printf("Cantidad de Segundos (s):");

    scanf("%i",&segundos);

    float dia_fracc = ((segundos/3600)/24);

    int dia = dia_fracc;

    float fracc_seg = dia_fracc;

    float hora_fracc = (segundos/3600)/12;

   // printf("%f",dia_fracc);

    int hora = hora_fracc;

    float min_fracc = (hora_fracc*60)/24;
   
    int minuto = min_fracc;

    float seg_rest =( 60 - minuto)*60;

    printf("Dias: %i",dia);
    printf("\n");
    printf("Horas:%i",hora);
    printf("\n");
    printf("Minutos:%i",minuto);
    printf("\n");
    printf("segundos:%f",seg_rest);
    return 0;
}