#include "imginfo.h"

//creation functions
ref fileCreate(int width, int height){
	ref img = (ref)malloc(sizeof(bitmapFile));
	img->width=width;
	img->height=height;
	img->imgX=20;
	img->imgY=20;
	img->filezise=30;
	img->path="this is qupposed some sort of path";
	//will add more of the stuff from the main data struct if needed later
}
ref fileCopy(ref fileToCopy){
	ref img = (ref)malloc(sizeof(bitmapFile));
	memcpy(nbmp, img, sizeof(bitmapFile));
	nbmp->bitmapData = (char *)malloc(nbmp->bmpdatasize);
	return nbmp;
}
void getSize(int width, int height){
	width[0]=img->width;
	height[0]=img->height;
}
void getComponents(int * r, int * g, int * b, int * a){
	char * buff = (char *)(&pixel);
	r[0]=buff[0];
	g[0]=buff[1];
	b[0]=buff[2];
	a[0]=buff[3];
}
void ANBitmapFileWriteToFile (ANBitmapFileRef bmp, char * path) {
	if (!bmp) return;
	FILE * fp = fopen(path, "w");
	fwrite(img->title, 2, 1, fp);
	fwrite(&(img->filesize), 4, 1, fp);
	fwrite(&(img->width), 4, 1, fp);
	fwrite(&(img->height), 4, 1, fp);
	fwrite(&(img->path), 4, 1, fp);
	fclose(fp);
}
