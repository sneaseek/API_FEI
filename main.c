#include <stdio.h>
#include <float.h>

int main(void) {

    double strojove_epsilon_double = 1.0;
    double temp_double = 1.0 + strojove_epsilon_double;
    float strojove_epsilon_float = 1;
    float temp_float = 1 + strojove_epsilon_float;

    while (temp_float > 1) {
        strojove_epsilon_float = strojove_epsilon_float / 2;
        temp_float = 1 + strojove_epsilon_float;
    }
    printf("Strojove epsilon pre float je - %.17g\n", strojove_epsilon_float * 2);
    printf("Najnizsie cislo float nezaokruhlene na 1 - %.17g\n", 1 + (strojove_epsilon_float * 2));
    printf("Hodnota FLT_EPSILON je - %.17g\n\n", FLT_EPSILON);

    while (temp_double > 1.0) {
        strojove_epsilon_double /= 2.0;
        temp_double = 1.0 + strojove_epsilon_double;
    }
    printf("Strojove epsilon pre float je - %.17g\n",strojove_epsilon_double * 2.0);
    printf("Najnizsie cislo double nezaokruhlene na 1 - %.17g\n", 1.0 + (strojove_epsilon_double * 2.0));
    printf("Hodnota DBL_EPSILON je - %.17g\n", DBL_EPSILON);
    return 0;
}