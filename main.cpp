/* 
 * File:   main.cpp
 * Author: hvl
 *
 * Created on April 23, 2019, 2:49 PM
 */

/*
 * This program will read a file of id's and names and will
 * sort them by id (sorting by name will be available in future versions)
 * 
 * input txt/csv does NOT need an empty line at the end of the file
 *
 * Sample input:
 *
 *  BBBB-5555/Name
 *  AAAA-1111/Name
 *
 * Sample output:
 *
 *  AAAA-1111/Name
 *  BBBB-5555/Name
 *
 * The class Video will be used to store this info
 *
 * Add this to compile options: -static-libgcc -static-libstdc++
 */

#include "Video.h"
#include "Functions.h"

int main(int argc, char** argv) {

    Video *videoArray;
    int nVids=0;
    readVideos(videoArray,nVids);
    sortVideos(videoArray,nVids);
    printVideos(videoArray,nVids);

    return 0;
}
