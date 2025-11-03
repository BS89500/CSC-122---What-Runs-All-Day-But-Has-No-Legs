#include <string>
#include <iostream>
#include "Timer.hpp"

Timer::Timer() {
   this->t1 = NULL;
   this->t2 = NULL;
   this->started = false ;
}

void Timer::start() {
   if (started == false) {
      started = true;
      this->t1 = clock();
   }
   else {
      std::cout << "Clock is already on" << std::endl;
   }
}

void Timer::stop() {
   if (started == true) {
      started = false;
      t2 = clock() - t1;
   }
}

void Timer::elapsed() {
   try
   {
      if (t1 == NULL || t2 == NULL) {
         throw "Clock has not started";
      }
      if (started == false) {
         std::cout << difftime(t2, t1) / CLOCKS_PER_SEC  << std::endl;
      }
   }
   catch (const char* msg) {
      std::cout << msg << std::endl;
   }


}

std::string pretty_print() {
   return "Implement your code here!";
}
