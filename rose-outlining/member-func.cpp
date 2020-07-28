int a;

class B
{
  private:

  int b;
 inline void foo(int c)
 {
#pragma rose_outline
   b = a+c;
 }
};
