#include <Arduino.h>
#include <mastraSerial.h>


mastraSerial::mastraSerial(byte sn){
    _sn = sn;//store
}

void mastraSerial::init(long baud){
    switch(_sn){
        case 0:
            Serial.begin(baud);
            break;
        case 1:
            Serial1.begin(baud);
            break;
        case 2:
            Serial2.begin(baud);
            break;
        case 3:
            Serial3.begin(baud);
            break;
    }
}

void mastraSerial::printSerial(char** string, int x){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(string[i]);
                Serial.print('\t');
            }
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(string[i]);
                Serial1.print('\t');
            }
            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(string[i]);
                Serial2.print('\t');
            }
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(string[i]);
                Serial3.print('\t');
            }
            break;
    }
}

void mastraSerial::printSerial(char** string, int x, char space, char End){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(string[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(string[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(string[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(string[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
    }
}

void mastraSerial::printSerial(int* array, int x){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(array[i]);
                Serial.print('\t');
            }
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(array[i]);
                Serial1.print('\t');
            }
            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(array[i]);
                Serial2.print('\t');
            }
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(array[i]);
                Serial3.print('\t');
            }
            break;
    }
}

void mastraSerial::printSerial(int* array, int x, char space, char End){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
    }
}

void mastraSerial::printSerial(float* array, int x){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(array[i]);
                Serial.print('\t');
            }
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(array[i]);
                Serial1.print('\t');
            }
            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(array[i]);
                Serial2.print('\t');
            }
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(array[i]);
                Serial3.print('\t');
            }
            break;
    }
}

void mastraSerial::printSerial(float* array, int x, char space, char End){
    switch(_sn){
        case 0:
            for (int i=0; i<x; i++){
                Serial.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 1:
            for (int i=0; i<x; i++){
                Serial1.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);            break;
        case 2:
            for (int i=0; i<x; i++){
                Serial2.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
        case 3:
            for (int i=0; i<x; i++){
                Serial3.print(array[i]);
                if (space) Serial.print(space);
            }
            if (End) Serial.print(End);
            break;
    }
}
