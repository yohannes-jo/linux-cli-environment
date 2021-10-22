#ifndef TIME_H
#define TIME_H

/* 
  We will need a way to return system Date and Time in a formatted,
  well defined way. For example, Jan 20, 2021 13:45:12. Time functions
  are essential.
*/

/* 
  Also need a way to tell what month it is
*/

#include <ctime>
#include <string>

std::string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

std::string date_and_time()
{
  time_t t = time(0);
  tm *now = localtime(&t); // The local time (based on the time zone)

  std::string year = std::to_string(now->tm_year + 1900);
  int month = now->tm_mon;
  std::string day = std::to_string(now->tm_mday);

  std::string hour = std::to_string(now->tm_hour);
  std::string min = std::to_string(now->tm_min);
  std::string sec = std::to_string(now->tm_sec);

  return months[month] + ' ' + day + ", " + year + ' ' + hour + ':' + min + ':' + sec;
}
#endif // TIME_H