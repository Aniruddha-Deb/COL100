#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_gen(double *classes, double *probabilities, int n) {
    double class = ((double)rand())/RAND_MAX;
    double prob_sum = 0;
    int class_index = 0;
    for (; class_index<n; class_index++) {
        if (prob_sum < class && prob_sum+probabilities[class_index] > class) {
            break;
        }
        else {
            prob_sum += probabilities[class_index];
        }
    }

    double rand_num = (((double)rand())/RAND_MAX)*(classes[class_index+1] - classes[class_index]) + classes[class_index];
    return rand_num;
}

int main() {
    
    srand(time(NULL));

    double classes[] = {0, 20, 40, 60, 80, 100};
    double probabilities[] = {0.1, 0.2, 0.4, 0.2, 0.1};
    int n = 5;

    for (int i=0; i<1000; i++) {
        printf("%.5lf\n", rand_gen(classes, probabilities, n));
    }

    return 0;
}
