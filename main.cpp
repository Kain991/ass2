#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
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
void changeLuck(Person &luck1 , Person &luck2){
    int temp = luck1.getLuck();
    luck1.setLuck(luck2.getLuck());
    luck2.setLuck(temp);
}
int main() {
    vector <Person> person(5);
    srand(time(0));
    Person* person1 = new Person(15 , "Kainar" , rand()%100);
    Person* person2 = new Person(17 , "Maksat" ,rand()%100) ;
    Person* person3 = new Person(18 , "Dosya" ,rand()%100) ;
    Person* person4 = new Person(17 , "Didar" ,rand()%100) ;
    Person* person5 = new Person(25 , "Yerassyl" ,rand()%100) ;
    person = {*person1 , *person2 , *person3 , *person4 , *person5};


//    person[0].setAge(15);person[0].setName("Kainar");person[0].setLuck(rand()%100);
//    person[1].setAge(17);person[1].setName("Maksat");person[1].setLuck(rand()%100);
//    person[2].setAge(18);person[2].setName("Dosya");person[2].setLuck(rand()%100);
//    person[3].setAge(20);person[3].setName("Didar");person[3].setLuck(rand()%100);
//    person[4].setAge(25);person[4].setName("Yerassyl");person[4].setLuck(rand()%100);
    int randvalue = rand()%100;
    int closestvalue = 99999 , index ;
    for(int i = 0 ; i < 5 ;i++){
        if(abs(person[i].getLuck()-randvalue) < closestvalue ){
            closestvalue = abs(person[i].getLuck()-randvalue);
            index = i;
        }
    }
    cout<<randvalue<<" \n";
    cout<<"Luckiest guy is "<<person[index].getName()<<" with luck "<<person[index].getLuck()<<"\n\n";
    cout<<"Changing luck values\n Person 1 luck point: "<<person[0].getLuck()<<" Luckiest persons luck points"<<person[index].getLuck()<<endl;
    changeLuck(person[0] ,person[index]);
    cout<<"Changing luck values\n Person 1 luck point: "<<person[0].getLuck()<<" Luckiest persons luck points"<<person[index].getLuck()<<endl;
    for(int i = 0 ; i < person.size();i++){
        cout<<person[i].getName()<<" "<<person[i].getAge()<<" "<<person[i].getLuck()<<"\n";
    }
    delete person1 , person2 , person3 , person4 , person5;
}
