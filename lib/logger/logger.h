#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

class Log {
    public:
        typedef int Level;

        Log(Level level = INFO) : m_LogLevel(level) {}

        static const Level ERROR = 0;
        static const Level WARNING = 1;
        static const Level INFO = 2;
        static const Level DEBUG = 3;
        static const Level VERBOSE = 4;
        static const Level SILLY = 5;

        void setLevel(Level level);
        void error(const char* message);
        void warn(const char* message);
        void info(const char* message);
        void debug(const char* message);
        void verbose(const char* message);
        void silly(const char* message);

    private:
        Level m_LogLevel;
        const char *m_ErrorHeader = "[ERROR]";
        const char *m_WarningHeader = "[WARN]";
        const char *m_InfoHeader = "[INFO]";
        const char *m_DebugHeader = "[DEBUG]";
        const char *m_VerboseHeader = "[VERBOSE]";
        const char *m_SillyHeader = "[SILLY]";
};

void doLogs(Log *log);

#endif
