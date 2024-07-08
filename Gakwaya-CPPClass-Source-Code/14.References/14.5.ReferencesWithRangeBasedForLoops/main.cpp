#include <iostream>


int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};
    std::cout << scores << "just scores is address " << std::endl;    
    //Printing positions
    std::cout << std::endl;
	
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;

    // hold on, we can use reference in 
    // for-loop also ??
   for ( auto& score : scores){
        std::cout << "score referer " << score << std::endl; 
        score = score * 10;
    }
    for ( auto score : scores){
        std::cout << "score referer " << score << std::endl; 
        score = score * 10;
    }
    //Printing after change
    std::cout << std::endl;
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;
    
    return 0;
}