#include <iostream>

class Log {
    public:
        static const int LogLevelError = 0;
        static const int LogLevelWarning = 1;
        static const int LogLevelInfo = 2;
        static const int LogLevelDebug = 2;
        static const int LogLevelVerbose = 2;
        static const int LogLevelSilly = 2;

        void SetLevel(int level) {
            m_LogLevel = level;
        }

        void Error(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                std::clog << "[WARN] " << message << std::endl;
            }
        }

        void Warn(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                std::clog << "[WARN] " << message << std::endl;
            }
        }

        void Info(const char* message) {
            if (m_LogLevel >= LogLevelInfo) {
                std::clog << "[INFO] " << message << std::endl;
            }
        }

        void Debug(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                std::clog << "[DEBUG] " << message << std::endl;
            }
        }

        void Verbose(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                std::clog << "[VERBOSE] " << message << std::endl;
            }
        }

        void Silly(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                std::clog << "[SILLY] " << message << std::endl;
            }
        }

    private: 
        // int flag = 1;
        int m_LogLevel = LogLevelInfo; 
};
