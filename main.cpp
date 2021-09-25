#include <iostream>
using namespace std;
class Person{
private:
    int age;
    string name;
    int luck;
public:
    Person(int ageC , string nameC , int luckY) {
        age = ageC;
        name = nameC;
        luck = luckY;
    }
    Person(){
        age = 15;
        name = "kain";
        luck = 20;
    }

    int getAge(){
        return age;
    }
    int getLuck(){
        return luck;
    }
    string getName(){
        return name;
    }
    void setAge(int valAge){
        age = valAge;
    }
    void setLuck(int valLuck){
        luck = valLuck;
    }
    void setName(string valName){
        name = valName;
    }


};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
