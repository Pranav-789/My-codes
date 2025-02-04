#include<iostream>
#include<vector>

//typedef std::vector<std::pair<std::string,int>> pairlist_t; // pairlist is typedef for this long as* data type
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {

    text_t firstname = "Pranav";
    number_t age = 18;
    //pairlist_t pairlist;

    std::cout<<firstname<<'\n';
    std::cout<<age<<'\n';

    return 0;
}