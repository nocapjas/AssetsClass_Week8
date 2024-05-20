//
// Created by Jasmine Madora-Rivas on 5/19/24.
//

#ifndef ASSETSCLASS_WEEK8_ASSETS_H
#define ASSETSCLASS_WEEK8_ASSETS_H
#include <string>
using namespace std;

class Assets {
private:
    string _name;
    size_t _numberOfTags;
    string* _tags;
public:
    Assets(); // take no parameter constructor
    Assets(const string& name); // take name constructor
    ~Assets(); // destructor
    Assets(const Assets& other); // copy constructor
    const Assets& operator=(const Assets& rhs); // copy assignment
    void AddTag(const string& tags);
    string ToString() const;
};


#endif //ASSETSCLASS_WEEK8_ASSETS_H
