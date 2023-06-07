#include <stdio.h>
#include <stdlib.h>

int numbers()
{
    printf("%f \n", 2 + 3.2);
    printf("%f \n", 2 - 3.2);
    printf("%f \n", 2 / 3.2);
    printf("%f \n", 2 * 3.2);

    //-----------------------

    printf("%d \n", 2 + 3);
    printf("%d \n", 2 - 3);
    printf("%f \n", 2.0 / 3.0);
    printf("%d \n", 2 * 3);

    //-----------------------

    printf("%f \n", pow(2,5));
    printf("%f \n", sqrt(81));
    printf("%f \n", round(2.75));
    printf("%f \n", round(2.20));
    printf("%f \n", ceil(2.20));
    printf("%f \n", floor(2.75));

    return 0;
}
