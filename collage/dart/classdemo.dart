import 'dart:io';

void main() {
  myclass obj = myclass("2.9+45=");
  print(obj.func());
}

class Stack {
  List? stk;
  int ptr = -1;
  Stack() {
    this.stk ??= [];
    this.ptr = -1;
  }
  void push(var data) {
    this.stk!.add(data);
    this.ptr++;
  }

  dynamic pop() {
    this.ptr--;
    return this.stk!.removeLast();
  }
}

class myclass {
  var post;
  var pre;
  myclass.con2(this.post, this.pre);
  myclass(var a) {
    this.post = a;
    print("post in consructor $post\n");
  }
  // var list[];
  func() {
    print("post is $post\n");
    var operator, flag = false, a = '', b = '';
    for (var i = 0; i < post.length; i++) {
      if (post[i] == "=") break;
      if (post[i] == "+" ||
          post[i] == "-" ||
          post[i] == "/" ||
          post[i] == "*") {
        operator = post[i];
        flag = true;
      } else if (flag == false) {
        a += post[i];
      } else if (flag == true) {
        b += post[i];
      }
    }
    print(a);
    print(b);
    return [double.parse(a) + 8.23, b, operator];
  }
}
