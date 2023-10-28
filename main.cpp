#include "logger.h"
#include "dates.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    tm *date = dateNow();
    sayTime(date);

    Log logger(Log::DEBUG);
    doLogs(&logger); 

    return 0;
}
