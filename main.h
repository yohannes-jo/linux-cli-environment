#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <iomanip>
#include "user.h"
#include "time.h"

// Get current user, date, and time from the system
std::string user = current_user();
std::string date_time = date_and_time();

void run_main()
{
  system("clear");

  // Set foreground and background color
  std::cout << "\033[30;47m";

  std::cout << "======================================================" << std::endl;
  std::cout << "| " << std::setw(21) << "|" <<  std::setw(31) << '|' << std::endl;
  std::cout << "| " << std::setw(20) << user << "|" << std::setw(30) << date_time << "|" << std::endl;
  std::cout << "| " << std::setw(21) << "|" <<  std::setw(31) << '|' << std::endl;
  std::cout << "======================================================" << std::endl;
}

#endif // MAIN_H