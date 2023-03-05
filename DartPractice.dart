class OpenAc {
  String name = "User";
  int age = 21;
  bool isPan = true;

  OpenAc(String clientName, int clientAge, bool pan){
    this.name = clientName;
    this.age = clientAge;
    this.isPan = pan;
  }

  void open(){
    if(isPan == false){
      print("your account cannot be opened");
    }
    else
    print("$name, your account is open");
  }
}

//super class
class PreOpenAc extends OpenAc{  
  PreOpenAc(String username, int age, bool pan) : super(username,age,pan);
  void GiveLoan(){
    if(isPan == true){
      print("$name, you can get loan");
    }
    else
    print("No loan applicable");
  }
}

void main(){
  /*
  print("hey");
  int a = 5;  
  String name = "yato";
  print(a);
  print(name);
  */

  dynamic age = 21;
  print(age);
  age = "nora";
  print(age);

  print(func());
  print(greet());

  List<String> characters = ["Goku", "Luffy", "Naruto"];
  characters.remove("Goku");
  print(characters);
  characters.add("Ichigo");
  print(characters);
  //characters.add(02); //since data type of list is not defined
  //print(characters);

  OpenAc firstUser = OpenAc("Naruto", 16, false); //instance of class (object) created
  print(firstUser.name);
  firstUser.age = 19;
  print(firstUser.age);

  firstUser.open();

  PreOpenAc secUser = PreOpenAc("Luffy", 18, true);
  secUser.open();
  secUser.GiveLoan();
}

int func(){
  return 49;
}

String greet() => "happy"; //when we return only one value