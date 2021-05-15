#include <stdio.h>

int is_prime(int number);
int main(){
    int min, max;
    scanf("%d  %d", &min, &max );
    if (min%2 == 0)
        min++;
    else if (min == 1)
        min=min+2;
    for(;min<max; min=min+2){
        if(is_prime(min) && is_prime(min+2) && (min+2)<=max)
            printf("%d %d\n", min, min+2);
    }
    return 0;
}

int is_prime(int number){
    int i;
    for (i=2; i<number ; i++){
        if (number % i == 0)
            return 0;
    }return 1;
}
