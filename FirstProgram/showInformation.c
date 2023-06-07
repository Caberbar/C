#include <stdio.h>
#include <stdlib.h>

int showInformation()
{
    double number = 10.123456789;
    char letter = 'C';

    printf("My %s number is %.12f. \n","id", number); //%d number no decimal, %s character, %f decimal nomber, %.12f for more deciaml
    printf("My letter is %c. \n", letter); //%c only one character
    printf("\"Program\" final\n");
    return 0;
}
