#include <iostream>
#include "labyrinth.cpp"
#include "out.cpp"
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    op(generate(20, 20));
}
