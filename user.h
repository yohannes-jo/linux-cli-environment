#ifndef USER_H
#define USER_H

// Get the name of the current user
#include <string>

std::string current_user()
{
  return getenv("LOGNAME");
}
#endif