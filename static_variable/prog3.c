void show()
{
  static int x=0;
  if(x==4)return;
  x++;
  printf("%d\n",x);
  show();
}
void main()
{
  show();
}

//1
//2
//3
//4
  

 
