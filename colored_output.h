#ifndef COLORED_OUTPUT_FILE
#define COLORED_OUTPUT_FILE
#include <stdio.h>

//color functions
void red () {
  printf("\033[1;31m");
}
void yellow() {
  printf("\033[1;33m");
}
void reset () {
  printf("\033[0m");
}
void green(){
    printf("\033[1;32m");
}
void green1(){
    printf("\033[0;32m");
}
void blue(){
    printf("\033[1;34m");
}
void cyan(){
    printf("\033[0;36m");
}
#endif