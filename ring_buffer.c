#include "ring_buffer.h"

unsigned char buffer[BUFFER_SIZE];
unsigned char head = 0;
unsigned char tail = 0;
unsigned char counter = 0;

void bufferFlush(void)
{
  head = 0;
  tail = 0;
  counter = 0; 
}

void pushInBuffer(unsigned char data)
{
  if (counter < BUFFER_SIZE){
      buffer[tail] = data;    
      counter++;                   
      tail++;                   
      if (tail == BUFFER_SIZE) tail = 0;
    }
}

unsigned char getFromBuffer(void)
{
   unsigned char data = 0;
   if (counter > 0){                          
      data = buffer[head]; 
      counter--;                                   
      head++;      
      if (head == BUFFER_SIZE) head = 0;
   }
   return data;
}

unsigned char isAvailable(void)
{
	if(!counter == 0)
	{
		return 1;
	}
	else if(counter == 0)
	{
		return 0;
	}
}

unsigned char getCounter(void)
{
	return counter;
}


