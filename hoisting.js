class Person{
  constructor(_name, _age)
  {
    this.name = _name;
    this.age = _age;
  }
}

class Programmer extends Person{
  constructor(_name,_age,_yoe)
  {
    super(_name,_age);
    this.yoe=_yoe;
  }
}