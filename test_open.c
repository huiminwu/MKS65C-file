#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void t_open() {
    printf("TESTING OPEN----------------\n");
    printf("opening a.txt: %i \n", open("a.txt", O_RDONLY));

}
