#include <iostream>

#include "dates.h"

using namespace std;

tm *date_now() {
    time_t t = time(0);
    tm *now = localtime(&t);
    return now;
}

void log_time(const char *time) {
    clog << "🚀 The time is " << time << endl;
}

const char *parse_time_str(tm *date) {
    static char result[9];
    snprintf(result, sizeof(result), "%02d:%02d:%02d", date->tm_hour, date->tm_min, date->tm_sec);
    return result;
}
