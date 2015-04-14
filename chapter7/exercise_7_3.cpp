/* 
 * File:   exercise_7_3.cpp
 * Author: tarnavskiyya
 *
 * Created on 8 квітня 2015, 12:31
 */

#include <cstdlib>
#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_box(const box);
void set_volume(box*);
/*
 * 
 */
int main(int argc, char** argv) {
    box mybox={"True God",10,20,30,0};
    cout<<"Here is my box!"<<endl;
    show_box(mybox);
    set_volume(&mybox);
    show_box(mybox);
    return 0;
}

void show_box(const box b)
{
    cout<<"Box information:"<<endl;
    cout<<"Height:"<<b.height<<endl;
    cout<<"Width:"<<b.width<<endl;
    cout<<"Length:"<<b.length<<endl;
    cout<<"Volume:"<<b.volume<<endl;
}
void set_volume(box* pb)
{
    pb->volume=pb->height*pb->length*pb->width;
}
