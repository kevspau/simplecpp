#include <iostream>
#include <string>
#include <filesystem>
#include <vector
#include <cctype>
#include <thread>
#include <chrono>
#include <random>
using namespace std;


vector<string> ezSplit(string delimiter, string s)
{
  vector<string> ret(500, "");
  int thing = 0;
  while ((int x = s.find(delimiter)) != string::npos)
  {
    ret[thing] = s.substr(0, x)
    thing++;
    s.erase(0, x + delimiter.length());
  }
  ret[thing + 1] = s;
  ret.shrink_to_fit();
  return ret; 
}
string ezLower(string s)
{
  char str[s.length];
  for (int i = 0; i <= str.size(); i++)
  {
    str[i] = tolower(s[i]);
  }
  string ret = to_string(str);
  return str;
}
string ezUpper(string s)
{
   char str[s.length];
  for (int i = 0; i <= str.size(); i++)
  {
    str[i] = toupper(s[i]);
  }
  string ret = to_string(str);
  return str;
}
void ezDelay(int milli)
{
  thread::this_thread::sleep_for(chrono::milliseconds(milli));
}
int ezRandom(int min, int max)
{
  random_device rd;
  mt19937 mt(rd);
  uniform_int_distribution<int> uid(min, max);
  return uid(mt);
}


