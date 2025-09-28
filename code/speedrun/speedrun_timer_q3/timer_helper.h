#pragma once
#include <string>

std::string GetTimeStringFromMilliseconds(int milliseconds, int accuracy);
int GetTimeSecondFromMilliseconds(int milliseconds, int accuracy);
int GetTimeMillisecondFromMilliseconds(int milliseconds, int accuracy);