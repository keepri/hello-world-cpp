#include <iostream>

#include "lib/dates/dates.h"
#include "lib/logger/logger.h"

using namespace std;

int main(int argc, char *argv[]) {
    log_time(get_time_str());

    Log::get().set_level(Log::SILLY).silly("Lets go!");
    return 0;
}
