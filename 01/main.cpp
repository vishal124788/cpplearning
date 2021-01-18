#include<iostream>
#include<vector>


int main(void){
    std::vector<int> values = {1,2,3,4,5};

    for( std::vector<int>::iterator it = values.begin(); 
        it !=values.end(); it++)
        {
            std::cout<< *it << std ::endl;
        }
    }
