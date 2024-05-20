//
// Created by Jasmine Madora-Rivas on 5/19/24.
//

#include "Assets.h"
#include "Assets.h"
#include <sstream>

Assets::Assets() {
    _numberOfTags = 0;
    _tags = nullptr;
}

Assets::Assets(const string &name) {
    _name = name;
    _numberOfTags = 0;
    _tags = nullptr;
}

Assets::~Assets() {
    delete[] _tags;
}

Assets::Assets(const Assets &other) {
    _name = other._name;
    _numberOfTags = other._numberOfTags;
    if (_numberOfTags > 0) {
        _tags = new string[_numberOfTags];
        for (size_t i = 0; i < _numberOfTags; i++) {
            _tags[i] = other._tags[i];
        }
    }
    else {
        _tags = nullptr;
    }
}

const Assets &Assets::operator=(const Assets &rhs) {
    if (this != &rhs) {
        //Destruction
        delete[] _tags;
        //Construction
        _name = rhs._name;
        _numberOfTags = rhs._numberOfTags;
        if (_numberOfTags > 0) {
            _tags = new string[_numberOfTags];
            for (size_t i = 0; i < _numberOfTags; i++) {
                _tags[i] = rhs._tags[i];
            }
        }
        else {
            _tags = nullptr;
        }
    }
    return *this;
}

void Assets::AddTag(const string &tags) {

    string* oldTags = _tags;
    //Copy tags into a slightly larger block
    _tags = new string[_numberOfTags+1];
    for (size_t i = 0; i < _numberOfTags; i++) {
        _tags[i] = oldTags[i];
    }
    //Add the new tag and increment count
    _tags[_numberOfTags++] = tags;
    //Deallocate the old block
    delete[] oldTags;
}

string Assets::ToString() const {
    stringstream output;

    output << "{\"name\":\"" << _name << "\", \"numberofTags\":\"" << _numberOfTags << "\",\"Tags\":";
    for (size_t i = 0; i < _numberOfTags; i++) {
        output << _tags[i] << ";";
    }
    output << "}";
    return output.str();
}