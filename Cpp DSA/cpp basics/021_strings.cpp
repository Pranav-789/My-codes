#include<iostream>

int main() {

    std:: string name;

    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    /*code 1*/
    // if(name.length() > 12){
    //     std::cout<< "Your name can't be over 12 charcters";
    // }
    // else{
    //     std::cout<<"Welcome "<< name;
    // }

    /*code 2*/
    // if (name.empty())
    // {
    //     std::cout<<"You didn't enter your name";
    // }
    // else{
    //     std::cout<<"Hello "<< name;
    // }

    /*code 3*/
    // name.clear();
    // std::cout<<"Hello "<<name;
    // return 0;

    /*code 4*/

    // name.append("@gamil.com");
    // std::cout<<"You username is now "<< name;

    /*code 5*/
    //std::cout<< name.at(0); // shows character at given index

    /*code 6*/
    // name.insert(0, "@");
    // std::cout<<"Hello "<<name<<'\n'; //insert character at given index

    // std::cout<< name.find(' '); // to find whitespaces index

    name.erase(0, 5);
    std::cout<<name;
}