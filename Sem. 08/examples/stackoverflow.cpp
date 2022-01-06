//Example of stackoverflow

void stackoverflow(int random)
{
  stackoverflow(random – 1);
}

int main()
{
  int test = INT_MAX;
  stackoverflow(test);
}
