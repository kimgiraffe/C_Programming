#include <stdio.h>
#include <float.h>

int main() {

    printf("FLT_MIN: %.50lf\n", FLT_MIN);
    printf("FLT_MAX: %.50lf\n", FLT_MAX);

    printf("DBL_MIN: %.50lf\n", DBL_MIN);
    printf("DBL_MAX: %.50lf\n", DBL_MAX);

    printf("LDBL_MIN: %.50lf\n", LDBL_MIN);
    printf("LDBL_MAX: %.50lf\n", LDBL_MAX);

    return 0;
}