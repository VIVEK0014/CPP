#include <iostream>
using namespace std;
class person {

   public:
   void talk() {
        cout << "I can talk! " << endl;
    }
   
    void eat() {
        cout << "I can eat!" << endl;
    }

    void walk() {
        cout << "I can walk!" << endl;
    }
};

class Doctor : public person 
{
 
   public:
    void diagnosis() 
    {
        cout << "start" << endl;
    }
};

class Footballer : public person 
{
 
   public:
    void play() 
    {
        cout << "let's play football" << endl;
    }
};

int main() {
    Doctor doctor1;
    doctor1.eat();
    doctor1.walk();
    doctor1.talk();
    doctor1.diagnosis();
    
    Footballer f1;
    f1.eat();
    f1.walk();
    f1.talk();
    f1.play();
    return 0;
}
