class myclass {
  var post;
  Function? func;

  myclass(var a, func) {
    this.post = a;
    print("post in consructor $post\n");
    print(this.func);
    print(func);
  }
  myclass.c2(this.post, this.func);
}

main() {
  new myclass(
    "123566",
    (prameter, parameter2) {
      prameter = 45;
      parameter2 = 99;
      print("inside $prameter and $parameter2");
      return "inside class parameter function";
    },
  );

  myclass obj2 = myclass.c2(89, () {
    print("hallo from const 2 function");
  });
}
