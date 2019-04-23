/* 
 * File:   Functions.h
 * Author: hvl
 *
 * Created on April 23, 2019, 2:51 PM
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Video.h"

void readVideos(Video *&, int &);
void sortVideos(Video *&, int);
void printVideos(Video *, int);

int videocmp(const void*,const void*);

#endif /* FUNCTIONS_H */

