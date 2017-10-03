#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct _mainData {
	int imgX;
	int imgY;
	int filesize;
	int width;
	int height;
	char title;
	int red;
	int blue;
	int green;
	int alpha;//if needed lol
}
typedef _mainData bitMapFile;
typedef bitmapFile* ref;
typedef int pixels;

//creation of the images if needed
ref fileCreate(int width, int height);
ref fileCopy(ref r);
void getSize(ref r, int width, int height);

//pixels
void setPixel(ref s, int height, int width, pixels settingPixels);
void getComponents(ref s, int imgX, int imgY, pixels gettingPixels);
ref withComponents(int red, int blue, int green, int alpha);

//set and save the files
ref savingFiles(ref r, char * title);

//delete the said file
ref deleteFiles(ref currentFiles);


