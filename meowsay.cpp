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








int main(int argc , char * argv[])
{
    if (argc > 1)
    {
        meow((argv[1]));
    }
    else 
    {
        string text;
        cin >> text;
        system("clear");
        meow(text);
    }
}
