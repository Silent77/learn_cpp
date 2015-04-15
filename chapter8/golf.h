/* 
 * File:   golf.h
 * Author: tarnavskiyya
 *
 * Created on 15 квітня 2015, 11:35
 */

#ifndef GOLF_H
#define	GOLF_H

const int Len=40;

struct golf
{
    char fullname[Len];
    int handicap;
};
// non-interractive version. Set golf structure by parameters
void setgolf(golf& g,const char* name, int hc);
// interractive version. Ask user to input data. Return 1 if success, 0 - if fullname is empty
int setgolf(golf& g);

// set new handicap
void handicap(golf& g,int hc);

//show golf structure
void showgolf(const golf& g);
#endif	/* GOLF_H */

