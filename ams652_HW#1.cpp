#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define STATEMENT "Please enter your "

int main(){

  std::string title, first_name, last_name, dob, bio;
  std::vector<std::string> v = {title, first_name, last_name, dob, bio};
  std::vector<std::string> w = {"title", "first name", "last name", "DOB", "Bio"};
  std::vector<std::string> output;
  int iter = 0;
  int j    = 0;

  std::for_each(w.begin(), w.end(),
  [&v, &w, &output, &iter](std::string s){
    std::cout << STATEMENT << s << ": " << std::endl;
    std::getline(std::cin, v[iter]);
    output.push_back(v[iter]);
    iter += 1;
  });

  std::for_each(output.begin(), output.end(),
  [&j](std::string s){
    if(j < 3){
      std::cout << s <<" ";
    }
    if(j == 3){
      std::cout << "\n" <<"\t" <<"DOB: " << s << std::endl;
    }
    if(j == 4){
      std::cout << "\t" << "Bio: " << s << std::endl;
    }
    j += 1;
  });

  return 0;
}
