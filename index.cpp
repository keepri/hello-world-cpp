#include "logger.h"
#include <iostream>

int add(int x, int y) {
    return x + y;
}

void do_logs() {
    Log log;
    log.SetLevel(log.LogLevelInfo);
    log.Info("Hello, world!");

    if (strcmp("1", "2") == 0) {
        log.Warn("Equal.");
    } else {
        log.Warn("Not equal!");
    }
}

int main (int argc, char *argv[]) {
    do_logs();
    return 0;
}
