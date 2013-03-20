#include <stdio.h>

int main(){
    double low, high, step;
    double cel, far;
    low = 0;
    high = 100;
    step = 1;
    printf("%4s    %6s\n", "cel", "far" );
    while(low <= high){
        cel = low;
        far = cel / (5.0/9.0) + 32.0;
        printf("%4.0f    %6.2f\n", cel, far);
        low = low + step;
    }
}
