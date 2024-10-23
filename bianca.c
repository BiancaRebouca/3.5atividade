#include <stdio.h>
#include <math.h>


int main() {

//declaração de variável

int numero1;
int numero2;
int numero3;

//saida e entrada

printf("informe o primeiro numero: ");
scanf("%d", &numero1);

printf("informe o segundo numero: ");
scanf("%d", &numero2);

printf("informe o terceiro numero: ");
scanf("%d", &numero3);



//numero1 primeiro(menor)

if (numero1<numero2 && numero1<numero3) {
printf(" Menor: %d ",numero1);
}

//numero2 primeiro(menor)

else if (numero2<numero1 && numero2<numero3) {
printf(" Menor: %d ",numero2);
}

//numero3 primeiro(menor)

else if (numero3<numero1 && numero3<numero2) {
printf(" Menor: %d ",numero3);
}

//numero1 segundo(meio)

if ((numero1<numero2 && numero1>numero3)||(numero1<numero3 && numero1>numero2)) {
printf(" Meio: %d ",numero1);
}

//numero2 segundo(meio)

else if ((numero2<numero1 && numero2>numero3)||(numero2<numero3 && numero2>numero1)) {
printf(" Meio: %d ",numero2);
}

//numero3 segundo(meio)

else if ((numero3<numero2 && numero3>numero1)||(numero3<numero1 && numero3>numero2)) {
printf(" Meio: %d ",numero3);
}

//numero1 maior

if (numero1>numero2 && numero1>numero3) {
printf(" Maior: %d ",numero1);
}

//numero2 maior

else if (numero2>numero1 && numero2>numero3) {
printf(" Maior: %d ",numero2);
}

//numero3 maior

else if (numero3>numero2 && numero3>numero1) {
printf(" Maior: %d ",numero3);
}

}
