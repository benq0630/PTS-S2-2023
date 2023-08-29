#ifndef TIGER_H
#define TIGER_H

class Tiger {
private:
    int age; // Private age variable

public:
    Tiger(); // Default constructor
    Tiger(int initialAge); // Parameterized constructor

    // Getter and setter for age
    void setAge(int newAge);
    int getAge() const;
};

#endif // TIGER_H
