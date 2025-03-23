#include "formatfloat.h"

formatfloat::formatfloat() {

}
float formatfloat::format(float number) {
    dtostrf(number, 6, 4, buffer);
    String formatted = String(buffer);
    float result = formatted.toFloat();
    return result;
}
