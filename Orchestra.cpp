#include <iostream>
#include "Musician.h"
#include "Orchestra.h"
#include <string>

static int current_count = 0;

Orchestra::Orchestra() {
    size = 0;
}

Orchestra::Orchestra(int size) {
    this->size = size;
    members = new Musician[size];
}

Orchestra::~Orchestra() {
    delete[] members;
    members = nullptr;
}

int Orchestra::get_current_number_of_members() {
    return current_count;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current_count; ++i) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return members;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_count < size) {
        members[current_count] = new_musician;
        current_count++;
        return true;
    } else {
        return false;
    }
}
