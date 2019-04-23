/* 
 * File:   Video.cpp
 * Author: hvl
 * 
 * Created on April 23, 2019, 2:50 PM
 */

#include "Video.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_CHAR_LINE 200

Video::Video() {
    this->names=NULL;
    this->id=NULL;
    this->idLen=0;
    this->namesLen=0;
}

Video::Video(const Video& orig) {
    char idAux[200];
    char namesAux[200];
    orig.GetId(idAux);
    orig.GetNames(namesAux);
    SetId(idAux);
    SetNames(namesAux);
    SetIdLen(orig.GetIdLen());
    SetNamesLen(orig.GetNamesLen());
}

//Video::~Video() {
//    free(this->id);
//    free(this->names);
//}

void Video::SetNames(const char* source_names) {
    int len=strlen(source_names);
    if(this->names)
        delete [] this->names;
    this->names = new char[len+1];
    strcpy(this->names,source_names);
    SetNamesLen(len);
}

void Video::GetNames(char *ret) const {
    strcpy(ret,this->names);
}

void Video::SetId(const char* source_id) {
    int len=strlen(source_id);
    if(this->id)
        delete [] this->id;
    this->id = new char[len+1];
    strcpy(this->id,source_id);
    SetIdLen(len);
}

void Video::GetId(char *ret) const {
    strcpy(ret,this->id);
}

void Video::PrintData(void){
    cout<<this->id<<','<<this->names<<endl;
}
void Video::PrintDataInfo(void){
    cout<<this->id<<'/'<<this->names<<endl;
    cout<<this->idLen<<' '<<this->namesLen<<endl;
}
bool Video::GetVideo(void){
    char line[MAX_CHAR_LINE];
    if(!(cin.getline(line,MAX_CHAR_LINE)))
        return false;
    char idAux[200], namesAux[200];
    int i=0, j=0, k=0;
    while(line[i]!=','){
        //copy the id into idAux
        idAux[j]=line[i];
        j++;
        i++;
    }
    idAux[j]=0;
    i++;
    while(line[i]){
        //copy the names into namesAux
        namesAux[k]=line[i];
        k++;
        i++;
    }
    namesAux[k]=0;
    SetId(idAux);
    SetNames(namesAux);
    return true;
}

Video& Video::operator =(Video obj){
    char id1[200];
    char names1[200];
    obj.GetId(id1);
    obj.GetNames(names1);
    SetId(id1);
    SetNames(names1);
    SetIdLen(obj.GetIdLen());
    SetNamesLen(obj.GetNamesLen());
    return *this;
}

void Video::SetNamesLen(int namesLen) {
    this->namesLen = namesLen;
}

int Video::GetNamesLen() const {
    return namesLen;
}

void Video::SetIdLen(int idLen) {
    this->idLen = idLen;
}

int Video::GetIdLen() const {
    return idLen;
}

