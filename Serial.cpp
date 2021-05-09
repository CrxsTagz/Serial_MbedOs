#include "mbed.h"

Serial port(USBTX, USBRX); // tx, rx
 
int main() {
    port.printf("Cristina Tavarez 2017-5574\n");
    while(1) {
        port.putc(port.getc() + 1);
    }
}

