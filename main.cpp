#include <iostream>

#include "src/timer.hpp"
/* difftime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
using namespace std;
int main() {
  time_t then;
  time_t now;
  Timer timer;
  string input;

  timer.elapsed();

  timer.start();
  timer.start();

  then = time(NULL);
  cout << "Timer has started (Type'stop' to stop timer)";
  cin >> input;
  if (input == "stop") {
    timer.stop();
    now = time(NULL);
  }
  timer.elapsed();
  cout << endl << now - then << endl;
  cout << ctime(&now);

  return 0;
}
