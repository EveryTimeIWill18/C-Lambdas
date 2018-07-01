#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
#include <numeric>

int main(){





    // create and fill vector
    std::vector<int> v; for(int i = -5; i <= 5; i++) v.push_back(i);

    // use for_each loop with lambda to print out values
    std::for_each(v.begin(), v.end(), [](int i){std::cout << i << ", "; });
    std::cout << std::endl;


    std::for_each(v.begin(), v.end(),
    [](int i){
        if(i < 0) std::cout <<"negative "<< -i <<", ";
        else if(i > 0) std::cout<<"positive "<<", ";
        else std::cout <<"zero ";

        }
    );

    std::vector<int> w; for(int i=0; i<15; i++) v.push_back(i);
    auto print = [](const int& n){std::cout << " " << n; };
    std::cout << "before:";
    std::for_each(w.begin(), w.end(), print);
    std::cout << "\n";
    std::generate_n(v.begin(), 15, []{return 0;} );
    std::for_each(v.begin(), v.end(), [](int i){std::cout <<i<<", "; });





    // insert data into vector
    std::vector<int> a;
    for(int i=0; i < 11; i++) v.push_back(i);

    auto printr = [](const int& n){std::cout << " " << n; };

    int sum = 0;
    std::for_each(a.begin(), a.end(), [&sum](int i) {sum+=i;});
    std::cout << sum << std::endl;


    int myvar = 25;
    int *iPtr;
    iPtr = &myvar;
    std::cout << "iPtr = "<< *iPtr << std::endl;
    std::cout << "iPtr = "<< iPtr << std::endl;

   int arr[10];
   int* aPtr;
    aPtr = &arr[0];

    for(int i=0; i < 10; i++){
        *(aPtr + i) = i;
    }
    for(int i=0; i < 10; i++){
        std::cout << arr[i] << std::endl;
    }




    auto glambda = [](auto a, auto &&b){return a < b;};
    bool b = glambda(3.44, 3.14);
    std::cout << b << std::endl;


    std::vector<int> Y = {1,2,3,4,5};
    std::vector<std::vector<int> > X = {{1,1,1,1,1}, {1,4,3,2,1}};
    std::vector<int> theta = {1, 1};





    return 0;
}




