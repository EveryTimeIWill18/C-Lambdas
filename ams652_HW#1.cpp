#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main(){

  std::string title, first_name, last_name, DOB, Bio;

  std::vector<std::string> v = {"title", "first name", "last name", "DOB", "Bio"};
  std::vector<std::string> input = {title, first_name, last_name, DOB, Bio};
  std::for_each(v.begin(), v.end(),
  [&input](std::string s){
    int i = 0;
    std::cout <<"Please enter your " << s << ": "<< std::endl;
    std::cin >> input[i];

  });
  

  //std::cout << "Please enter your title: ";
  //std::cin >>  title;




  return 0;
}
