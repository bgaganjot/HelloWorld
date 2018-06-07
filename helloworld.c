#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    FILE *f = fopen("/tmp/HelloWorld.conf", "w");
    fprintf(f, "Hello World!");
    //printf("Hello World!");
    fclose(f);
    return 0;
}
