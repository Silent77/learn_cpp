/* 
 * File:   string2.h
 * Author: tarnavskiyya
 *
 * Created on 21 квітня 2015, 15:04
 */

#ifndef STRING2_H
#define	STRING2_H

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;                 // Pointer to string data
    int len;                    // Length of string
    static int num_strings;     // Total numer of strings
    static const int CINLIM=80; // Limit input in cin
public:
    String (const char* s);     // Constructor
    String ();                  // Default constructor
    String (const String &);    // Copy constructor
    ~String();
    int length () const { return len; }
    // Reload operators
    String     & operator= (const char*);
    String     & operator= (const String&);
    char       & operator[](int i);
    const char & operator[](int i) const;
    // Friends
    friend bool      operator< (String & st1, String & st2);
    friend bool      operator> (String & st1, String & st2);
    friend bool      operator== (String & st1, String & st2);
    friend ostream & operator<< (ostream & os, const String & st);
    friend istream & operator>> (istream & is, const String & st);
    // Static functions
    static int HowMany();    
};



#endif	/* STRING2_H */

