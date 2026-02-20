#ifndef SD_HELP_H
#define SD_HELP_H

#include <SD.h>
#include <Arduino.h>

class SDHelper
{
public:
    SDHelper(int chipSelectPin);
    void writeToFile(const String &data);

private:
    File myFile;
};

#endif