#include "logger.h"
#include <iostream>

int add(int x, int y) {
    return x + y;
}

void do_logs(Log* log) {
    log->SetLevel(log->LogLevelInfo);
    log->Info("Hello, world!");

    int a = std::atoi("1");
    if (a == 1) {
        log->Info("Atoi is 1");
    }

    if (strcmp("1", "2") == 0) {
        log->Warn("Equal.");
    } else {
        log->Warn("Not equal!");
    }
}

int main (int argc, char *argv[]) {
    Log logger = make_logger();
    do_logs(&logger);
    return 0;
}
