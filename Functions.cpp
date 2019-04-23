#include "Functions.h"

#include <cstring>
#include <cstdlib>

void readVideos(Video *&videoArray, int &nVids){
    Video aVideo;
    Video tempArray[500];
    while(1){
        if(!aVideo.GetVideo())
            break;
        tempArray[nVids++] = aVideo;
    }
    videoArray = new Video [nVids];
    for(int i=0;i<nVids;i++)
        videoArray[i] = tempArray[i];
}

void sortVideos(Video *&videoArray, int nVids){
    qsort(videoArray,nVids,sizeof(Video),videocmp);
}

//for comparing video ids
int videocmp(const void *v1,const void *v2){
    Video *video1, *video2;
    video1=(Video*)v1;
    video2=(Video*)v2;
    char aux1[200], aux2[200];
    video1->GetId(aux1);
    video2->GetId(aux2);
    return strcmp(aux1,aux2);
}

void printVideos(Video *videoArray, int nVids){
    for(int i=0;i<nVids;i++)
        videoArray[i].PrintData();
}