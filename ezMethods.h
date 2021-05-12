#include <iostream>
#include <string>
#include <filesystem>
#include <vector>
#include <cctype>
#include <thread>
#include <chrono>
#include <random>


std::vector<string> ezSplit(std::string delimiter, std::string s)
{
  std::vector<string> ret(500, "");
  int thing = 0;
  while ((int x = s.find(delimiter)) != std::string::npos)
  {
    ret[thing] = s.substr(0, x)
    thing++;
    s.erase(0, x + delimiter.length());
  }
  ret[thing + 1] = s;
  ret.shrink_to_fit();
  return ret; 
}
std::string ezLower(std::string s)
{
  std::string str;
  for (int i = 0; i <= str.size(); i++)
  {
    str[i] = std::tolower(s[i]);
  }
  return str;
}
string ezUpper(std::string s)
{
   std::string str;
  for (int i = 0; i <= str.size(); i++)
  {
    str[i] = toupper(s[i]);
  }
  return str;
}
std::void ezDelay(int milli)
{
  std::thread::this_thread::sleep_for(chrono::milliseconds(milli));
}
int ezRandom(int min, std::int max)
{
  std::random_device rd;
  std::mt19937 mt(rd);
  std::uniform_int_distribution<int> uid(min, max);
  return uid(mt);
}


