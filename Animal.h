#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class animal {
    private :
        string name;
        int age;
        bool isHungry;
    public:
        animal();
        animal(string name, int age, bool isHungry);
        ~animal();
        void display();
        void feed();
        string getName();
        void setName(string n);
        int getAge();
        void setAge(int a);
}; 



#endif
