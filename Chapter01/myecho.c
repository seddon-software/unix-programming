#include "../headers.h"

int main(int argc, char *argv[])
{
    for (int i=1; i<argc; i++)
        printf ("%2d: %s\n", i, argv[i]);
    return 0;
}
