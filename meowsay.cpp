#include <iostream>


using namespace std;






void meow (string text) 
{
    cout << "       " << text << endl;
    cout << R"( ／l 
（ﾟ､ ｡７
  l  ~ヽ
  じしf_,)ノ
  )";


  cout << endl;
}







string runArgSpliter (int argc , char * argv[])
{
    string tmp;

    for (int i = 1 ; i < argc ; i++)
    {
        tmp = tmp + argv[i] ;
        tmp = tmp + ' ';
    }

    return tmp;
}








int main(int argc , char * argv[])
{
    if (argc > 1)
    {
        meow(runArgSpliter(argc , argv));
    }
    else 
    {
        cout << R"($ ./your_program
Usage: ./your_program <text>
Description: This program takes a string as an argument and prints it with a cat ASCII art.
Example: ./your_program Hello
This will print:
       Hello
 ／l 
（ﾟ､ ｡７
  l  ~ヽ
  じしf_,)ノ
)";
    }
}
