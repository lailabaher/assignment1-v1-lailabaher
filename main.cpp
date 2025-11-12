#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

animal :: animal() {
    name = "";
    age = 0;
    isHungry = true;
}
animal :: ~animal() {}
animal :: animal(string name, int age, bool isHungry){
    this-> name = name;
    this->age = age;
    this->isHungry = isHungry;
}
void animal :: display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "isHungry: " << isHungry << endl;
}
void animal :: feed(){
    if (isHungry = true){
        cout << "animal is hungry" << endl;
    } else {
        cout << "animal is not hungry" << endl;
    }
}
string animal :: getName(){
    return name;
}
void animal :: setName(string n){
    name = n;
}
int animal :: getAge(){
    return age;
}
void animal :: setAge(int a){
    age = a;
}
mammal :: mammal() {
    furColor ="";
}
mammal :: ~mammal() {}
mammal :: mammal (string name, int age, bool isHungry, string furColor) {
    this-> name = name;
    this->age=age;
    this->isHungry = isHungry;
    this->furColor = furColor;
}
string mammal :: getFurColor(){
    return furColor;
}
void mammal :: setFurColor(string f){
    furColor = f;
}
bird :: bird() {
    wingSpan = 0.0;
}
bird :: ~bird() {}
bird :: bird(string name, int age, bool isHungry, float wingSpan){
    this-> name = name;
    this->age=age;
    this->isHungry = isHungry;
    this->wingSpan = wingSpan;
}
float bird :: getWingSpan(){
    return wingSpan;
}
void bird :: setWingSpan(float w){
    wingSpan = w;
}
enclosure :: enclosure() {
    animal *animals = nullptr;
    capacity = 0;
    currentCount = 0;
}
enclosure :: enclosure(int capacity, int currentCount, animal * a){
    this->capacity = capacity;
    this->currentCount = currentCount;
    animal * a = new animal[capacity];
}
enclosure :: ~enclosure() {
    delete [] animals;
}
void enclosure :: addAnimal(animal * a){
    //add animal
}
void enclosure :: displayAnimals(){
    for (int i = 0; i<capacity ;i++){
        cout << "Animal " << i << ":" << endl;
        cout << "Name: " << *(&animals[i]).getName() << endl;
        cout << "Age: " << *(&animals[i]).getAge() << endl;
        cout << *(&animals[i]).feed() << endl;
    }
}
int enclosure :: getCapacity(){
    return capacity;
}
void enclosure :: setCapacity(int cap){
    capacity = cap;
}
int enclosure :: getCurrentCount(){
    return currentCount;
}
void enclosure :: setCurrentCount(int c){
    currentCount = c;
}
visitor :: visitor(){
    visitorName = "";
    ticketsBought = 0;
}
visitor :: visitor (string visitorName, int ticketsBought){
    this->visitorName = visitorName;
    this->ticketsBought = ticketsBought;
}
void visitor :: displayInfo(){
    cout << "Visitor Name: " << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}
visitor :: ~visitor(){}
string visitor :: getVisitorName(){
    return visitorName;
}
void visitor :: setVisitorName(string v){
    visitorName = v;
}
int visitor :: getTicketsBought(){
    return ticketsBought;
}
void visitor :: setTicketsBought(int t){
    ticketsBought = t;
}
int main() {
    enclosure en1(10, 5, * a);
    mammal m1("lion", 2, true, "orange");
    bird b1("parrot", 4, false, 2.4);
    reptile r1("crocodile", 1, true, "blue");
    visitor v1("Sara", 20);
    cout << "Enclosure 1 Animals: " << endl;
    cout << m1.getName <<"(Age: " <<m1.getAge()<<"," << m1.feed() << endl;
    cout << b1.getName <<"(Age: " <<b1.getAge()<<"," << b1.feed() << endl;
    cout << r1.getName <<"(Age: " <<r1.getAge()<<"," << r1.feed() << endl;
    cout << "Visitor Info: " << endl;
    cout << "Name: " << v1.getVisitorName() << endl;
    cout << "Tickets Bought: " << v1.getTicketsBought() << endl ;
    return 0;
}
