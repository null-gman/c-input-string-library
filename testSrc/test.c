#include <stdio.h>
#include "inputStrLib.h"

int main(void)
{
    char game[20] = {0};
    int rc = inputStr("your game: ", game, 20);
    if (rc == -1) {
        puts("overflowe input"); /* the use type string longer then the buffer including '\0'*/
    }else if (rc == 0) {
        puts("null input"); /*the use didn't type anything */
    }else {
        puts(game);
    }


    /* even if the use create an overflow in fgets , you can use the function again with no problems */
    char movie[20] = {0};
    int rc2 = inputStr("your movie: ", movie, 20);
    if (rc2 == -1) {
        puts("overflowe input");
    }else if (rc2 == 0) {
        puts("null input");
    }else {
        puts(movie);
    }

    return 0;
}
