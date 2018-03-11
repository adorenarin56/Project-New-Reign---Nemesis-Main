#ifndef GLOBAL_H_
#define GLOBAL_H_

#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <ctime>
#include <stdlib.h>
#include <compute.h>
#include <boost\filesystem.hpp>
#include <boost\date_time\posix_time\posix_time.hpp>

typedef std::vector<std::string> vecstr;
typedef std::vector<char> vecchar;

extern bool debug;
extern bool error;
extern int memory;
extern boost::posix_time::ptime time1;
extern std::unordered_map<std::string, std::string> behaviorPath;

size_t fileLineCount(std::string filepath);
extern void read_directory(const std::string& name, vecstr& fv);
extern void produceBugReport(std::string directory, std::unordered_map<std::string, bool> chosenBehavior);
inline extern std::string randomStringGenerator();
inline extern int sameWordCount(std::string line, std::string word);
inline extern vecchar getKey(std::string keyline);
extern vecstr GetFunctionLines(std::string filename);
inline extern bool isFileExist(const std::string& filename);

#endif