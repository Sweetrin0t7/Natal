#include <stdio.h>

int main() {
    int dia_atual, mes_atual;
    int data, dias, natal=355;
    
    printf("dia mes: ");
    scanf("%d %d", &dia_atual, &mes_atual);
    
//------------------------se for natal ja printa, se não o codigo começa
   if(mes_atual < 1 || mes_atual > 12 || dia_atual < 1 || dia_atual > 30){
        printf("Data inexistente"); 
    }else if(dia_atual==25 && mes_atual==12){
        printf("Feliz Natal!");
    }else if(mes_atual==12 && dia_atual>25){
        printf("O Natal ja passou");
    }else{
        data = dia_atual + ((mes_atual-1)*30);
        dias = natal - data;  
//------------------------------se passar do natal
        if(dias<0){
            dias = dias + 360;
        }
        printf("Faltam %d dias para o Natal", dias);
    }

    

    return 0;
}