#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

class Log {
    typedef int Level;
    typedef const char* Header;

    private:
        Level m_LogLevel;
        static Header m_ErrorHeader;
        static Header m_WarningHeader;
        static Header m_InfoHeader;
        static Header m_DebugHeader;
        static Header m_VerboseHeader;
        static Header m_SillyHeader;

    public:
        Log(const Level& level = INFO) : m_LogLevel(level) {}

        static const Level ERROR = 0;
        static const Level WARNING = 1;
        static const Level INFO = 2;
        static const Level DEBUG = 3;
        static const Level VERBOSE = 4;
        static const Level SILLY = 5;

        void setLevel(const Level& level);
        void error(const char* message);
        void warn(const char* message);
        void info(const char* message);
        void debug(const char* message);
        void verbose(const char* message);
        void silly(const char* message);
};

void doLogs(Log& log);

#endif
