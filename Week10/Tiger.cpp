#include "Tiger.h"

Tiger::Tiger() : age(0) {}

Tiger::Tiger(int initialAge) {
    if (initialAge > 0) {
        age = initialAge;
    } else {
        age = 0;
    }
}

void Tiger::setAge(int newAge) {
    if (newAge > 0) {
        age = newAge;
    }
}

int Tiger::getAge() const {
    return age;
}
