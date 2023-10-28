#include <iostream>
#include "logger.h"

using namespace std;

void Log::setLevel(Level level) {
    m_LogLevel = level;
}

void Log::error(const char* message) {
    if (m_LogLevel >= ERROR) {
        clog << m_ErrorHeader << " " << message << endl;
    }
}

void Log::warn(const char* message) {
    if (m_LogLevel >= WARNING) {
        clog << m_WarningHeader << " " << message << endl;
    }
}

void Log::info(const char* message) {
    if (m_LogLevel >= INFO) {
        clog << m_InfoHeader << " " << message << endl;
    }
}

void Log::debug(const char* message) {
    if (m_LogLevel >= DEBUG) {
        clog << m_DebugHeader << " " << message << endl;
    }
}

void Log::verbose(const char* message) {
    if (m_LogLevel >= VERBOSE) {
        clog << m_VerboseHeader << " " << message << endl;
    }
}

void Log::silly(const char* message) {
    if (m_LogLevel >= SILLY) {
        clog << m_SillyHeader << " " << message << endl;
    }
}

void doLogs(Log *log) {
    log->info("Hello, world!");

    int a = atoi("1");
    if (a == 1) {
        log->debug("Atoi is 1");
    }

    if (strcmp("1", "2") == 0) {
        log->debug("Equal.");
    } else {
        log->debug("Not equal!");
    }
}
