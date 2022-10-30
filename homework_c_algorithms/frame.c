#include <stdio.h>

void create_frame(int argc, char** argv);

int main(int argc, char** argv) {
    create_frame(argc, argv);
}

void create_frame(int argc, char** argv) {
    int height = (int) argv[1];
    int width = (int) argv[2];
    printf("%d %d", height, width);
}

