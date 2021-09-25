#include <iostream>
#include <cmath>
#include <vector>
#include <time.h>
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
    vector <Person> person(5);
    srand(time(0));
    person[0].setAge(15);person[0].setName("Kainar");person[0].setLuck(rand()%100);
    person[1].setAge(17);person[1].setName("Maksat");person[1].setLuck(rand()%100);
    person[2].setAge(18);person[2].setName("Dosya");person[2].setLuck(rand()%100);
    person[3].setAge(20);person[3].setName("Didar");person[3].setLuck(rand()%100);
    person[4].setAge(25);person[4].setName("Yerassyl");person[4].setLuck(rand()%100);
    for(int i = 0 ; i < person.size();i++){
        cout<<person[i].getName()<<" "<<person[i].getAge()<<" "<<person[i].getLuck()<<"\n";
    }
}
