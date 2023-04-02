#include <stdio.h>
#include <stdint.h>
#include "7seg.h"
#include <unistd.h>


void convertByte(uint8_t v, uint8_t latch) ;
void push(uint8_t v) ;

FILE *output;

int main(void) {
  int i, j;
   
  printf("modulator for 9600 baud 595 controller\n") ;
   
  if ((output = fopen("output.bin", "wb")) == NULL) {  //open text file 'param 1' w/ err chk 
      printf(" }:[ Unable to open output.bin for output. WHY!?\n");
      return -1;
  }
    

  //convertByte(CG2['Y'-'0'], 1); // ascii, but starts at '0' and only does capitals
  
  convertByte(CG[0x0E], 1);          // 0-F hex numbers and space.
  
  //convertByte(0x00, 1);          // 0-F hex numbers and space.
  
  printf("\n");
         
  fclose(output);
  return 0; 
}


/*
  Each set of 2 bits is encoded into a byte
  sending 0x00 latches the data in.
    
  The MSB needs to be sent first
  And were sending two bits at a time  
*/
void convertByte(uint8_t v, uint8_t latch) {
  int i;
  uint8_t s, t;
 
  for ( i = 0; i < 4; i++) {

    s = (v >> (2*(3-i))) & 0x03;    

    switch(s) {  // yes, use a table if you want...
      case 0:    push(0xEF);    break;
      case 1:    push(0x9F);    break;
      case 2:    push(0xF9);    break;
      case 3:    push(0x8C);    break;
    }
  }
  
  if (latch != 0) { push(0x00); }
  
}


void push(uint8_t v) {
  fputc(v, output);
  printf("0x%02X ", v);

}
