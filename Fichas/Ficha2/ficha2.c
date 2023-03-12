#include <stdio.h>

float multInt1 (int n, float m){
    float r = 0.0;
    int i = 0;
    for (i=0;i<n;i++){
        r += m;
    }
    printf("%f \n",r);
    return r;

}

float multInt2 (int n, float m){
    float r;
    r = 0;
    while(n >= 1){
        if (n % 2 == 0){
            n /= 2;
            m *= 2;
        }else{
            r += m;
            n /= 2;
            m *= 2;
        }
    }
    printf("%f \n",r);
    return r;
}


int mdc1(int a, int b){

    int upper, result, i;

    if(a < b){
        upper = a;
    }else{
        upper = b;
    }

    for(i = 1; i <= upper; i++){
        if(a%i == 0 && b%i == 0){
            result = i;
        }
    }
    printf("%d \n",result);
    return result;
}

int mdc2(int a, int b){

    while(a != 0 || b != 0){
        if(a > b){
            a = a - b;
        }else if(a < b){
            b = b - a;
        }else{
            return a;
        }
    }
    if(a == 0){
        return b;
    }else{
        return a;
    }
}


int mdc3(int a, int b){

    while(a != 0 || a != 0){
        if(a > b){
            a = a % b;
        }else if(a < b){
            b = b % a;
        }else{
            return a;
        }
    }
    if(a == 0){
        return b;
    }else{
        return a;
    }
}

int fib1 (int n){
    if (n<2) {
        return 1;
    }
    else {
        return (fib1 (n-1) + fib1 (n-2));

    }
    
}

int fib2 (int n){
    
    int a, b, result, i;

    a = 1;
    b = 1;

    if(n == 1 || n == 2){
        return 1;
    }

    for(i = 0; i < n-2; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}


int main(){
    multInt1(300,3.0);
    multInt2(200,3.0);
    mdc1(40,10);

    printf("%d\n",fib1(20));
    printf("%d\n",fib2(3));
    return 0;
}

