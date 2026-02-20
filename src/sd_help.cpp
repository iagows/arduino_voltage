#include "sd_help.h"

SDHelper::SDHelper(int chipSelectPin)
{
    SD.begin(chipSelectPin);
    myFile = SD.open("value.csv", FILE_WRITE);
}

void SDHelper::writeToFile(const String &data)
{
    if (myFile)
    {
        myFile.println(data);
        // zmpt101b is very fast. It's better to flush the file after every write.
        myFile.flush();
    }
}
