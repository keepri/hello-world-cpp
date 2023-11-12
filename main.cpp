#include <iostream>

#include "lib/dates/dates.h"
#include "lib/logger/logger.h"

using namespace std;

int main(int argc, char *argv[]) {
    log_time(get_time_str());

    Log& log = Log::get().set_level(Log::SILLY);

    uint n = 69420;
    do {
        log.silly("Lets go!");
        n % 2 == 0 ? log.notice("") : log.alert("");
    } while(--n > 0);

    return 0;
}
