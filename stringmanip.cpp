#include <cstdlib>
#include<iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <sstream>


int main() {

    std::string s = "this is a string of characters!";
    std::string numeric = "1 2 3 4 5 6 7 8 9 10";
    std::string temp;
    std::string temp2;
    std::vector<std::string> v;
    int sum = 0;
    std::cout << "length of string = " << numeric.size() << std::endl;
    std::cout << numeric.find("5") << std::endl;
    
    std::for_each(numeric.begin(), numeric.end(),
            [&temp, &temp2, &v](char s){
                while(s != ' '){
                    temp.push_back(s);
                }
                std::for_each(temp.end(), temp.begin(),
                        [&v, &temp2](char c){
                            temp2.push_back(c);
                        });
                v.push_back(temp2);
                temp2.clear();
            });
           
    
    
   
   
    return 0;
