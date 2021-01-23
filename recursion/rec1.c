void show(int x)
{
  if(x==0)return;
  printf("%d\n",x);
  show(x-1);
  printf("ram\n");
}
void main()
{
  show(5);
}

//5
//4
//3
//2
//1
//ram
//ram
//ram
//ram
//ram

