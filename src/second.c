/* Wrong on purpose, added by a pull request: what does the check of the pull request say? */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char line[8];
    if (argc < 2)
        return 2;
    sprintf(line, "%s", argv[1]);
    puts(line);
    return 0;
}
