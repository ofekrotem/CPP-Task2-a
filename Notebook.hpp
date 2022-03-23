#include <iostream>
#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel
{
    class Notebook{
        public:
        void write(int pg, int r, int c, Direction d, string const &str);
        void erase(int pg, int r, int c, Direction d, int len);
        static string read(int pg, int r, int c, Direction d, int len);
        void show(int pg);
    };
}