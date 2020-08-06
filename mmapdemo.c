#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>
#include <zconf.h>

int main(void) {
    int *p1;
    int *p2;
    int fd = open("/Users/pzxy/WorkSpace/C/step_c/hello.txt", O_RDWR);
    if (fd < 0) {
        perror("open hello");
        exit(1);
    }
    p1 = mmap(0, 6, PROT_READ, MAP_PRIVATE| MAP_NORESERVE, fd, 0);
    if (p1 == MAP_FAILED) {
        perror("mmap1");
        exit(1);
    }
    p2 = mmap(0, 6, PROT_READ, MAP_SHARED | MAP_NORESERVE, fd, 0);
    if (p2 == MAP_FAILED) {
        perror("mmap2");
        exit(1);
    }

    close(fd);
    munmap(p1, 6);
    munmap(p2, 6);
    return 0;
}