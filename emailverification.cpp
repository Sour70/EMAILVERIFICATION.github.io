#include <iostream>
#include <string>
using namespace std;

int main()
{

  string gmail;

  cout << "\n\nGmail Verification :-" << endl;
  cout << "=====================" << endl
       << endl;

  cout << "Enter you Gmail." << endl;
  cin >> gmail;

  bool flag = true;
  int l = gmail.length();

  if (
      gmail[l - 1] == 'm' &&
      gmail[l - 2] == 'o' &&
      gmail[l - 3] == 'c' &&
      gmail[l - 4] == '.' &&
      gmail[l - 5] == 'l' &&
      gmail[l - 6] == 'i' &&
      gmail[l - 7] == 'a' &&
      gmail[l - 8] == 'm' &&
      gmail[l - 9] == 'g' &&
      gmail[l - 10] == '@' &&
      gmail[0] != '1' &&
      gmail[0] != '2' &&
      gmail[0] != '3' &&
      gmail[0] != '4' &&
      gmail[0] != '5' &&
      gmail[0] != '6' &&
      gmail[0] != '7' &&
      gmail[0] != '8' &&
      gmail[0] != '9' &&
      gmail[0] != '0')
  {
    for (int i = 0; i <= l; i++)
    {
          int ascii = gmail[i];

      if (
          gmail[i] == ' ' ||
          gmail[i] == ',' ||
          gmail[i] == '&' ||
          gmail[i] == '+' ||
          gmail[i] == '=' ||
          gmail[i] == '-' ||
          gmail[i] == '>' ||
          gmail[i] == '<' ||
          gmail[i] == '_' ||
          (64<ascii && ascii<91)
          )
      {
        flag = false;
      }
    }
  }

  else
  {
    flag = false;
  }

  if (flag == true)
  {
    cout << endl;
    cout << "------------------" << endl;
    cout << "| Gmail Verified |" << endl;
    cout << "------------------" << endl
         << endl;
  }
  else
  {
    cout << endl;
    cout << "---------------" << endl;
    cout << "| Wrong Gmail |" << endl;
    cout << "---------------" << endl
         << endl;
  }

  return 0;
}