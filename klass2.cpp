#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;


class cl1
{
public:
   int mass[16]; 
   float  y,i;

double f1(float x)
{
    double numbers[16];
    int r = 2;
    int kvadrat = 2;
    if (-4 <= x && x <= -2)
    { 
        y = x + 3;
    }
    else if (-2 <= x && x <= 4)
    { 
        y = -0.5 * x;
    }
    else if (4 <= x && x <= 6)
    {
        y = -2;
    }
    else if (6 <= x && x <= 10)
    { 
        y = sqrt(pow(2, kvadrat) - pow((x - 8), kvadrat)) - 2;
    }
      return y;
}
    
  
  int lab1()
{
   for (i = -4; i <= 10; i++)
    {
        y = f1(i);
        cout << "Y("<<i<<") ="<<y<<"\n";
    }
    return 0;
}
    
  double lab2()
    {
        int i;
        for (i = 0; i <= 15; i++)
        {
            mass[i] = i + 1;
            cout << "mass=" << mass[i] << "\n";
        }
        return i;
    }
  
  int lab3in()
  {
    fstream fout("red.txt"); 
    cout<<"start write txt"<<"\n";
  
       for (i = -4; i <= 10; i++)
    {
        y = f1(i);
       fout << "Y("<<i<<") ="<<y<<"\n"; // считываем в цикле значение у
    }
   fout.close(); //закрываем файл для чтения
   cout<<"end write txt"<< endl;
   return 0;
  }
    
    int lab3out()
  {
    string line;
    ifstream in("red.txt"); // окрываем файл для чтения
     cout<<"start read txt"<<"\n";
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line <<endl;
        }
    }
    in.close();     // закрываем файл
    cout<<"end read txt"<<"\n";
    return 0;
  }

   int lab4()
  {
    float z,a;
   cout << "a = ";
   cin >> a;
  z = (((a+2)/sqrt(2*a))-(a/(sqrt(2*a)+2))+(2/a-sqrt(2*a)))*(sqrt(a)-sqrt(2))/(a+2) ;
  cout << z; 
  return 0;
  }

};

int main()
{
    cl1 kon;
    kon.lab1();
    kon.lab2();
    kon.lab3in();
    kon.lab3out();
    kon.lab4();
}