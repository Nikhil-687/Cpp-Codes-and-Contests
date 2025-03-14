


#include<string>
#include<iostream>
#include<fstream>


class StudentData
{
private:
    std::string name;
    int roll;
    std::string branch;
public:
    StudentData(std::string s = "", int r = 0, std::string branch = ""){
        name = s;
        roll = r;
        this->branch = branch;
    }
    void display(){
        std::cout << "Name: " << name << "\nRoll Number: " << roll << "\nBranch: " << branch << "\n";
    }
    std::string getName(){
        return name;
    }
    void setName(std::string s){
        name = s;
    }
    friend std::ofstream & operator<<(std::ofstream &a, StudentData &s);
    friend std::ifstream & operator>>(std::ifstream &a, StudentData &s);
};
    
std::ofstream & operator<<(std::ofstream &a, StudentData &s){
    a << s.name << "\n" << s.roll << "\n" << s.branch << "\n";
    return a;
}

std::ifstream & operator>>(std::ifstream &a, StudentData &s){
    a >> s.name;
    a >> s.roll;
    a >> s.branch;
    return a;  
}

int main(){
    // std::ofstream xyz("myfile");
    // xyz << "abc\n" << 45;
    // xyz.close();

    // std::ifstream infile("myfile");
    // std::string str;
    // infile >> str;
    // int age;
    // infile >> age;
    // std::cout << "Name: " << str << "\n" << "Age: " << age << "\n";

// writing
    // std::cout << "\n\n";
    // StudentData s("Tanay Sharma", 60, "CSe");
    
    // std::ofstream student("Student");
    // student<<s;


// reading
    std::ifstream student_details("Student");
    // student_details.open("Student");
    StudentData s2;
    student_details>>s2;

    s2.display();

}