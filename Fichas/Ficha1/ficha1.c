#include <stdio.h>


//Ex 1

//1

//x=12 y=16

//2

//x = 0 e y não foi inicializado e aparece um número aleatório

//3

// a=A a=65 
// a=B a=66 c=2 c=48
// c=98 c=b

//4
//x=100 y=200

// Ex 2

// a)
// Output:
// 3 5


// b)
/*
x = 1 e y = 1
x = 2 e y = 3
x = 3 e y = 6
x = 4 e y = 10
x = 5 e y = 15
x = 6 e y = 21
x = 7 e y = 28
x = 8 e y = 36
x = 9 e y = 45
x = 10 e y = 55
x = 11 e y = 66
*/
// Output:
// 11 66


// c)
// Output:
// _#_#_#_#_#_#_#_#_#_#


// d)
// Output:
//
// 1
// 01
// 11
// 001
// 101
// 001
// 111
// 0001
// 1001
// 0101
// 1101
// 0011
// 1011
// 0111
// 1111

//Ex 3

void quadrado (int n){
    int i, j = 0;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("#");
        }
        printf("\n");
    }

}

void xadrez (int n) {
    int i, j = 0;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
        if ((i%2)==0){
            if((j%2)==0 ){
            printf("#"); 
            }
            else{
            printf("_");
            }
        }
        
        else {
            if((j%2)==1 ){
            printf("#"); 
            }
            else{
            printf("_");
            }
        }
        }
        printf("\n");
    }
}



void triangulo_vertical (int n){
    int i,j,k,g;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
        printf("#");
            }
        printf("\n");
        }
    for(k=n-1;k>0;k--){
        for(g=n;g>n-k;g--){
        printf("#");
        }
        printf("\n");
    }

}

void triangulo_horizontal (int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {

        for (j = n - 1; j > i ; j--) {
            putchar(' ');
        }

        for (k = 1; k < 2 * (i + 1); k++) {
            putchar('#');
        }

        putchar('\n');

    }
}

void circulo (int n) {
    int i,j,k;
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i ; j--) {
            putchar(' ');
        }
        for (k = 1; k < 2 * (i + 1); k++) {
            putchar('#');
        }
        putchar('\n');
    }
    for (i = 0; i < n*2; i++){
        for(k=1; k < (i + 1); k++ ){
            putchar(' ');
        }
        for (j = n*2+1; j > 2*(i+1) ; j--) {
            putchar('#');
        }
        putchar('\n');
    }
    printf ("%d",j);
}
    




int main (){
   int opt, n;

    printf("Introduza o numero da pergunta: ");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            quadrado(n);
        case 2:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            xadrez(n);
        case 3:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            triangulo_vertical(n);
        case 4:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            triangulo_horizontal(n);
        case 5:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            circulo(n);
    }

    return 0;
}


