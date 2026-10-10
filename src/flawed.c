/* Wrong on purpose, to see what the analysis reports: an argument used as a format string,
 * and a copy with no bound. */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char name[16];
    if (argc < 2)
        return 2;
    strcpy(name, argv[1]);
    printf(argv[1]);
    printf("\n%s\n", name);
    return 0;
}
