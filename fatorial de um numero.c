#include<stdio.h>
#include<locale.h>

int calcularfatorial(int n){
    int fatorial = 1;
    for (int c = 1; c <= n; c++){
        fatorial *= c;
    }
    return(fatorial);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, fat;
    printf("Informe um numero: ");
    scanf("%i", &n1);
    fat = calcularfatorial(n1);
    printf("%i! = %i", n1, fat);
    return(0);
}