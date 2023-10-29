#include <iostream>

#include "lib/dates/dates.h"
#include "lib/logger/logger.h"

using namespace std;

int main(int argc, char *argv[]) {
    tm *date = dateNow();
    sayTime(date);

    Log logger(Log::DEBUG);
    doLogs(logger);

    return 0;
}
