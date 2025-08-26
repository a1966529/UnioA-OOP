#include <string>
#include <iostream>



class Student {
    private:
        std::string name;
        int id;
    public: 
        int pecal;
        Student() {
            this->name = "peaca;da";
            this->id = 1;
        }

        Student(std::string name, int id) {
            this->name = name;
            this->id = id;
            // std::cout << "Who be thy?!!! " << name << "   Whateth thyn identification be?!!! " << id << std::endl;
        }
    std::string get_name() {
            return name;
        }
};

int main() {
    Student Paer;
    Paer.pecal = 10;
    std::cout << Paer.pecal << std::endl;
    // stdz::cout << std::endl;
    Student* Pat = new Student();
    // Student PatMan("PatMan", 1);
    std::cout << Pat->get_name() << std::endl;
    // std::cout << P.id << std::endl;
    
    // Student* s = new Student();
    // std::cout << s->get_name() << std::endl;
    return 0;
    
}