#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    int fd = open("a.txt", O_RDWR); //giving fd the ability to read and write
    char *buffer = malloc(sizeof(*buffer));
    int bytes_read = read(fd, buffer, 10);
    printf("Buffer from reading: %s", buffer);
    buffer = "aaaaaaaaa\n";
    int bytes_written = write(fd,buffer, 10);

    printf("bytes read: %i \n", bytes_read);
    printf("bytes written = %i \n", bytes_written);
    

    close(fd);
}
