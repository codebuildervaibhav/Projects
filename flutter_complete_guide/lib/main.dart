class Person
{
 String name= 'max';
  int age= 30;
  
  void display()
{
  print(this.name);
  print(this.age);
}
}



void main()
{
//.....
  var p1= new Person();
 
  print(p1.name);
  print(p1.age);
 
    var p2=new Person();
  p2.name='vaibhav';
  p2.age= 20;
  print(p2.name);
  print(p2.age);
  p1.display();
  p2.display();
}