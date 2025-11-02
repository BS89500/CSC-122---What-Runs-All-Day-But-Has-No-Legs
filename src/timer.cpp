#include <string>
#include <iostream>
#include "Timer.hpp"

Timer::Timer() {
   this->started = false ;
}

void Timer::start() {
   this->t1 = clock();
}

void Timer::stop() {
   t2 = clock() - t1;
}

void Timer::elapsed() {
   std::cout << difftime(t2, t1) / CLOCKS_PER_SEC  << std::endl;
}

std::string pretty_print() {
   return "Implement your code here!";
}
