#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#define BUFFER_SIZE 32

unsigned char buffer[BUFFER_SIZE];
unsigned char head;
unsigned char tail;
unsigned char counter;

void bufferFlush(void);
void pushInBuffer(unsigned char data);
unsigned char getFromBuffer(void);
unsigned char isAvailable(void);
unsigned char getCounter(void);




#endif
