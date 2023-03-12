#include <stdio.h>


int arrayTeste [10]= {1,2,3,4,5,6};


// 1 (a) 

// Ex 2

void swapM (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    }

// Ex 3

void swap (int v[], int i, int j){
    printf ("%d %d\n", v[i], v[j]);
    int temp;
    if(j!=i){
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

    }
    //printf ("%d %d\n", v[i], v[j]);
}




// Ex 4

int soma (int v[], int N){
    int i;
    int sum = 0;
    for(i=0;i<N;i++){
        sum += v[i];
    }
    printf("A soma dos elementos do array é %d", sum);
    return sum;
}

// Ex 5

void inverteArray1 (int v[], int N){
    int i;
    if(N % 2 == 0){
        for(i=0; i<(N/2); i++)
            swap(v, i, N-i-1);
    } else {
        for(i=0; i<=(N/2); i++)
            swap(v, i, N-i-1);
    }

    for(i=0; i<N; i++) 
        printf("%d ", v[i]);
}

// Ex 6

int maximum (int v[], int N, int *m){
    int i;
    for(i=0;i<N;i++){
    if (v[i]>v[i+1]){
        *m = v[i];
    }
    else { *m = v[i+1];}
    }
    if(N<=0){
    return 1;
    }
    return 0;
}

 void quadrados (int q[], int N){
    int i,j;
    int quadrado = 1;
    for(i=0;i<N;i++){
        q[i] = quadrado * quadrado;
        quadrado++;
    }

    for(j=0; j<N; j++) 
        printf("%d ", q[j]);
 }


void pascal (int v[], int N){
     int i,j;

    for (i = 0; i < N+1; i++) {

        v[i] = 1;

        for (j = 1; j < i; j++) {

            v[i - j] = v[i - j] + v[i - j - 1];
        }
    }
    for (j = 0; j < N; j++) {
        printf("%d ", v[j]);
    }
}


void pascalPrint(int N) {
    int i, j;
    int row[N];

    for (i = 0; i < N; i++) {
        row[0] = 1;
        for (j = i; j > 0; j--) {
            row[j] += row[j-1];
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", row[j]);
        }
        printf("\n");
    }
}




int main (){
    /*int x = 3, y = 5;
    swapM (&x, &y);
    printf ("%d %d\n", x, y);*/
    //swap(arrayTeste, 3, 4);
    //soma(arrayTeste,9);
    //int x;
    //maximum(arrayTeste,6,&x);
    //printf("%d",x);
    //inverteArray1(arrayTeste,6);
    //int vector[10]={0};
    //quadrados(vector,4);
    //pascal(vector,5);
    //pascalPrint(5);
    
    return 0;
    

}
