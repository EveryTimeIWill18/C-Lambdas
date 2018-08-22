#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// messing with nested lambdas
int main(){
    std::vector<std::vector<int>> m = {{1,1,1},{0,1,1},{1,0,0}};

    std::for_each(m.begin(), m.end(),
            [&m](std::vector<int> &v){
                std::for_each(v.begin(), v.end(),
                        [&v](int i){
                            std::cout << i << std::endl;
                        });
            });
 return 0;
}
