#include <iostream>

using namespace std;

class Log {
    public:
        typedef int Level;

        static const Level ERROR = 0;
        static const Level WARNING = 1;
        static const Level INFO = 2;
        static const Level DEBUG = 3;
        static const Level VERBOSE = 4;
        static const Level SILLY = 5;

        Log(Level level = INFO) : m_logLevel(level) {}

        void setLevel(Level level) {
            m_logLevel = level;
        }

        void error(const char* message) {
            if (m_logLevel >= ERROR) {
                clog << "[WARN] " << message << endl;
            }
        }

        void warn(const char* message) {
            if (m_logLevel >= WARNING) {
                clog << "[WARN] " << message << endl;
            }
        }

        void info(const char* message) {
            if (m_logLevel >= INFO) {
                clog << "[INFO] " << message << endl;
            }
        }

        void debug(const char* message) {
            if (m_logLevel >= DEBUG) {
                clog << "[DEBUG] " << message << endl;
            }
        }

        void verbose(const char* message) {
            if (m_logLevel >= VERBOSE) {
                clog << "[VERBOSE] " << message << endl;
            }
        }

        void silly(const char* message) {
            if (m_logLevel >= SILLY) {
                clog << "[SILLY] " << message << endl;
            }
        }

    private:
        Level m_logLevel;
};

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

