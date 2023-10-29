#include <iostream>

#include "dates.h"

using namespace std;

tm *dateNow() {
    time_t t = time(0);
    return localtime(&t);
}

void sayTime(tm *date) {
    cout << "The time is " << date->tm_hour << ":" << date->tm_min << "." << endl;
}
