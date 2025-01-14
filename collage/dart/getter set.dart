class Person {
  String _name;
  int _age;

  // Initialize the fields in the constructor
  Person(this._name, this._age);

  String get name => _name;
  set name(String value) {
    if (value.isEmpty) {
      throw Exception('Name cannot be empty');
    }
    _name = value;
  }

  int get age => _age;
  set age(int value) {
    if (value < 0) {
      throw Exception('Age cannot be negative');
    }
    _age = value;
  }
}

void main() {
  // Now you need to provide the name and age when creating a Person object
  Person person = Person('John Doe', 30); // Initialize name and age

  print('Name: ${person.name}');
  print('Age: ${person.age}');

  // Trying to set an invalid value
  try {
    person.name = 'df';
  } catch (e) {
    print(e.toString());
  }

  try {
    person.age = -10;
  } catch (e) {
    print(e.toString());
  }
}
