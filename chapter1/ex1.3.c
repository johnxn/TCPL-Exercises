#include <stdio.h>
int main(){
    int low, high, step;
    double far, cel;
    low = 0;
    high = 200;
    step = 20;
    printf("%3s%6s\n","Cel","far");
    while(low<=high){
        far = low;
	cel = (5.0/9.0) * (far-32.0);
	printf("%3.0f%6.1f\n", far, cel);
	low += 20;
    }
    
}
