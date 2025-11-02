#include <time.h>
#include <string>

std::string pretty_print();
class Timer {
protected:
    clock_t t1;
    clock_t t2;
    bool started;
public:
    Timer();
    void start();
    void stop();
    void elapsed();
};
