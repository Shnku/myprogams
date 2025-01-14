import 'dart:io';
import 'dart:math';

void main() {
  print('Enter expr:: ');
  String? name; //= "40+5.20-8.4*7=";
  name = stdin.readLineSync();
  print("you enterd $name");
  // print(doCalculation(name));
  calc2(name!);
}

String calc2(String str) {
  var ans;
  var list = [];
  var operators = []; // new List.empty();
  var temp = "";
  bool flag = false;
  for (var i = 0; i < str.length; i++) {
    print("\t----${i}_ts_scan__${str[i]}");
    if (str[i] == "=") {
      list.add(temp);
      list.addAll(operators.reversed);
      break;
    }
    if (str[i] == "+" ||
        str[i] == "-" ||
        str[i] == "/" ||
        str[i] == "*" ||
        str[i] == "^") {
      list.add(temp);
      bool added = false;
      // list.add(str[i]);
      if (operators.isNotEmpty) {
        if (weight(operators.last) < weight(str[i])) {
          operators.add(str[i]);
          added = true;
          print(operators);
        } else {
          while (operators.isNotEmpty &&
              weight(operators.last) >= weight(str[i])) {
            print(operators);
            print(list);
            // var l = operators.last;
            var l = operators.removeLast();
            // operators.remove(l) ? list.add(l) : null;
            list.add(l);
            print(operators);
          }
          // continue;
          // list.add(str[i]);
        }
      }
      flag = true;
      added ? null : operators.add(str[i]);
      // continue;
    }
    if (flag == false) {
      temp += str[i];
    }
    if (flag == true) {
      temp = "";
      flag = false;
    }
  }
  print(list);
  print(operators);
  ans = evalExpr(list);
  print("ans is : $ans");
  return ans.toString();
}

int weight(var x) {
  int v = 0;
  switch (x) {
    case "+":
    case "-":
      return 3;
    case "*":
    case "/":
      return 5;
    case "^":
      return 7;
  }
  return v;
}

dynamic evalExpr(var exp) {
  List<num> stk = [];
  for (var i = 0; i < exp.length; i++) {
    print("eval exp stack is: $stk");
    if (exp[i] == "+" ||
        exp[i] == "-" ||
        exp[i] == "/" ||
        exp[i] == "*" ||
        exp[i] == "^") {
      num n2 = stk.removeLast();
      num n1 = stk.removeLast();
      num ans = 0;
      switch (exp[i]) {
        case "+":
          ans = (n1 + n2);
          break;
        case "-":
          ans = (n1 - n2);
          break;
        case "*":
          ans = (n1 * n2);
          break;
        case "/":
          // if (n2 == 0) throw new IntegerDivisionByZeroException();
          ans = (n1 / n2);
          break;
        case '^':
          ans = pow(n1, n2);
          break;
        default:
          ans = 0;
      }
      stk.add(ans);
    } else {
      stk.add(num.parse(exp[i]));
    }
  }
  return stk;
}

String doCalculation(String s) {
  String ans = '';
  String a = "", b = "", operator = "";
  bool flag = false;
  for (var i = 0; i < s.length; i++) {
    if (s[i] == "=") break;
    if (s[i] == "+" || s[i] == "-" || s[i] == "/" || s[i] == "*") {
      operator = s[i];
      flag = true;
    } else if (flag == false) {
      a += s[i];
    } else if (flag == true) {
      b += s[i];
    }
  }
  print(a);
  print(b);
  num n1 = num.parse(a);
  num n2 = num.parse(b);
  switch (operator) {
    case "+":
      ans = (n1 + n2).toString();
    case "-":
      ans = (n1 - n2).toString();
    case "*":
      ans = (n1 * n2).toString();
    case "/":
      ans = (n1 / n2).toString();
    default:
      ans = "wrong";
  }
  return ans;
}
