#include <iostream>

char * Resize(char * data, size_t size, size_t capacity)
    {
      char * new_data = new char[capacity * 2];
      for (size_t i = 0; i < size; i++)
      {
        new_data[i] = data[i];
      }
      delete[] data_;
      capacity *= 2;
    }



char * createarray(int a);

int main()
{
  int b;
  char c;
  char * res = nullptr;
  while (std::cin >> b && std::cin >> a)
  {
    char * data = createarray(b);


  }
}
