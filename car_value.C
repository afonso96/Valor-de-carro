#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
// declare variable value of the car
// x = car value
float x,ipi,tr,ar, dh, cp;
int opcao;

// Value of the car without accessories
printf("Digite o valor do carro que deseja");
scanf("%f",&x);

// value of IPI
ipi = (x*1.08)-x;
printf("\n o valor do ipi do carro e =%.2f", ipi);

//trio-electric value - tr
tr= (x+ipi)*1.02-x;
printf("\n o valor do trio-eletrico e = %.2f", tr);

// air conditioning value - ar
ar= (x*1.02)-x;
printf("\n o valor do ar-condicionado e =%.2f", ar);

// hydraulic steering value - dh
dh = (x*1.02)-x;
printf("\n o valor da direcao hidraulica e %.2f", dh);

// complete car value - cp
cp = x+ipi+tr+ar+dh+0.035;
printf("\n o valor do carro completo com o desconto e=%.2f", cp);

//Creating menu for the user
printf("\n\nDigite a opcao que deseja adicionar ao seu carro");
printf("\n\n1- trio eletrico");
printf(" \n2- ar condicionado");
printf(" \n3- direcao hidraulica");
printf(" \n4- trio eletrico + ar condicionado");
printf(" \n5- trio eletrico + direcao hidraulica");
printf(" \n6- ar condicionado + direcao hidraulica");
printf(" \n7- completo");
scanf("%d", &opcao);

//giving result to the user
switch(opcao){
    case 1:
        printf("o valor do carro com o trio eletrico = %.2f", x+tr);
        break;
    case 2:
        printf("o valor do carro com o ar condicionado = %.2f", x+ar);
        break;
    case 3:
        printf("o valor do carro com a direcao hidraulica = %.2f", x+dh);
        break;
    case 4:
        printf("o valor do carro com o trio eletrico mais o ar condicionado = %.2f", x+tr+ar);
        break;
    case 5:
        printf("o valor do carro com o trio eletrico mais a direcao hidraulica = %.2f", x+tr+dh);
        break;
    case 6:
        printf("o valor do carro com o ar condicionado mais a direcao hidraulica = %.2f", x+ar+dh);
        break;
    case 7:
        printf("o valor do carro completo = %.2f", cp);
        break;


}










}
