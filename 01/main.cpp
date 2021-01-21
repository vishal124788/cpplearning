#include<iostream>
#include<vector>
class Log{
    public :
        enum Level: uint32_t{
            Error =0 ,Warning , Info 
        }; 

        //const int LogLevelError = 0;
       // const int LogLevelWarning = 1;
        //const int LogLevelInfo = 2;
    private:
         Level m_LogLevel = Info;
    public:
        void setlevel(int level)
        {
            m_LogLevel = level;
        }
        void Warn(const char* message)
        {
            if(m_LogLevel >=Warning)
            std::cout << "[WARNING]" <<message<<std::endl;
        }
        void Error(const char* message)
        {
            if(m_LogLevel >= Error)
            std::cout << "[ERROR]" <<message<<std::endl;
        }
        void Info(const char* message)
        {   
            if(m_LogLevel >= Info)
            std::cout << "[INFO]" <<message<<std::endl;
        }
};
int main(void){
    Log log;
    log.setlevel(log.Warning);
    log.Warn("Hello");
    std::cin.get();
    
}