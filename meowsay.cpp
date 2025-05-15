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
    meow(runArgSpliter(argc , argv));
}
