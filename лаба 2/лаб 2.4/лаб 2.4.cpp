#include <stdio.h>

int main() {
    double d1 = 120, t1 = 2; 
    double d2 = 80, t2 = 1;  
    double total_d, total_t, avg_speed;

    total_d = d1 + d2;
    total_t = t1 + t2;

    avg_speed = total_d / total_t;

    printf("Average speed: %.2lf km/h (as a fraction: %.0lf/%.0lf)\n", avg_speed, total_d, total_t);

    return 0;
}
