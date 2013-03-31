#include <stdio.h>
#include <math.h>

int main(){
    float Vs;
    float R;
    float C;
    char num;
    scanf("%f %f %f %d", &Vs, &R, &C, &num);
    float w = 0;
    char i;
    for(i=0; i<num; i++) {
        scanf("%f", &w);
        float t = R*C*w;
        printf("%0.3f\n", Vs*t/sqrt( (t*t) + 1) );
    }
    return 0;
}
