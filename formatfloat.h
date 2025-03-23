#ifndef FORMATFLOAT_H
#define FORMATFLOAT_H
#include <Arduino.h>
class formatfloat{
private:
    char buffer[20];
public:
    formatfloat();
    float format(float num);
};
#endif
