/* 
 * File:   Video.h
 * Author: hvl
 *
 * Created on April 23, 2019, 2:50 PM
 */

#ifndef VIDEO_H
#define VIDEO_H

class Video {
private:
    char *id; //movie id ex: 'AAAA-1111'
    char *names; //names separated by a '-' character, spaces replaced by a '_'
    //need to add a field for the size of the video
    int idLen;
    int namesLen;
public:
    Video();
    Video(const Video& orig);
//    virtual ~Video();
    void SetNames(const char* names);
    void GetNames(char *names) const;
    void SetId(const char* id);
    void GetId(char *id) const;
    void SetNamesLen(int namesLen);
    int GetNamesLen() const;
    void SetIdLen(int idLen);
    int GetIdLen() const;
    void PrintData(void);
    void PrintDataInfo(void);

    //methods for reading/writing
    bool GetVideo(void);
    //overload for assignment
    Video& operator =(Video);

//need a method for swaping values

};

#endif /* VIDEO_H */

