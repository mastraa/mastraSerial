#ifndef mastraSerial_h
#define mastraSerial_h

#include <Arduino.h> // for byte data type


class mastraSerial
{
  public:
    mastraSerial(byte sn);//(serial number, baud 0=9600, 1=57600, 2=115200)
    void init(long baud);
    void printSerial(char** string, int x);//Example calling function: printSerial(&prova, sizeof(prova)/sizeof(char*));
    void printSerial(char** string, int x, char space, char End);//not to use one of characters write 0
    void printSerial(int* array, int x, char space, char End);
    void printSerial(int* array, int x);
    void printSerial(float* array, int x, char space, char End);
    void printSerial(float* array, int x);

  private:
    byte _sn;

};




#endif



