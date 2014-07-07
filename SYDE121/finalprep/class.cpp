//Class declaration

class dayOfYear{
public:
  void input();
  void output();

private:
  void output(); //Member function declaration
  int month;
  int day;
}

//defining member function

  void DayofYear::output(){
    cout << "months = " << month
	 << " days = " << day
	 << endl;

}

// :: is the scope resolution operator. Use (.) operator to access the variable

//object -> className objectName1 objectName2
//Encapsulation

class derivedClass : baseClass {

}
