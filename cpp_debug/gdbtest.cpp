#include <iostream>
#include <cassert>

void a(int w){
    for(int i=0; i < w; i++){
        std::cout << i << " ";
        assert(i < 10);
    }
    std::cout << std::endl;
}

void b(int w){
    for(int i = 0; i < w; i++)
    a(i);
}

int main(int argc, char **argv){
    int w;
    std::cin >> w;
    b(w);
    return 0;
}