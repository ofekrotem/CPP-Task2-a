#include "Notebook.hpp"

using namespace std;
using namespace ariel;

void Notebook::write(int page, int row, int column, Direction direction, string const &to_write)
{
    if (page<0||row<0||column<0) {__throw_invalid_argument("Negetive args");}
    int str_len = to_write.size();
    if ((str_len+column)>100){__throw_invalid_argument("Out of bounds for row");}
}

string Notebook::read(int page, int row, int column, Direction direction, int length)
{
    if (page<0||row<0||column<0||length<0) {__throw_invalid_argument("Negetive args");}
    return " ";
}

void Notebook::erase(int page, int row, int column, Direction direction, int length)
{
    if (page<0||row<0||column<0||length<0) {__throw_invalid_argument("Negetive args");}
}

void Notebook::show(int page)
{
    if (page<0) {__throw_invalid_argument("Negetive args");}
}