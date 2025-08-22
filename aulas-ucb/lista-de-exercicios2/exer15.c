#include <stdio.h>
#include <stdlib.h>

int main( ){
 float salario_min, salario_mes, salario_bruto, imposto, salario_liquido, hora_trabalhada, dependente_final; 
 float hora_extra_final;
 int horas, dependente, hora_extra;

printf("\nDigite o valor do salario minimo: ");
scanf("%f", &salario_min);
printf("\nDigite a quantidade de horas trabalhadas: ");
scanf("%d", &horas);
printf("\nDigite o número de dependentes: ");
scanf("%d", &dependente);
printf("\nDigite a quantidade de horas extras: ");
scanf("%d", &hora_extra);

hora_trabalhada = salario_min / 5;
salario_mes = horas * hora_trabalhada;
hora_extra_final = hora_extra * (hora_trabalhada * 1.5);
dependente_final = dependente * 32;
salario_bruto = salario_mes + dependente_final + hora_extra_final;

if( salario_bruto > 500){
 imposto = 0.2;
}

else if(salario_bruto >= 200){
 imposto = 0.1;
}

else{
  imposto = 0;
}

salario_liquido = salario_bruto - (salario_bruto * imposto);

if(salario_liquido > 350){
 salario_liquido += 50;
}

else{
 salario_liquido+=100;
}

printf("Seu salario será de: RS%.2f\n", salario_liquido);
return 0;
}
