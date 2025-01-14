void main() {
  List tasksTodo = [
    ['fuck off', 1],
    ['just fuck off', 2],
    ['hola', 1],
    ['ffff', 1],
    ['suor', 1],
    ['kutta', 2],
    ['man', 2],
  ];
//   List arr = [null, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1];
  List arr = [null];
  arr.addAll(tasksTodo);
  print(arr);
  List b = [0, 0, 0];
  List c = [null];

  for (var i = 1; i < arr.length; i++) {
    b[arr[i][1]]++;
    c.add(0);
  }

  print(b);
  print(c);

  for (var i = 1; i < b.length; i++) {
    b[i] = b[i - 1] + b[i];
  }

  print(b);

  for (var i = arr.length - 1; i > 0; i--) {
    c[b[arr[i][1]]] = arr[i];
    b[arr[i][1]]--;
  }
  print(c);
}

/*
[
  null, 
  [fuck off, 1], 
  [just fuck off, 2], 
  [hola, 1], 
  [ffff, 1], 
  [suor, 1], 
  [kutta, 2], 
  [man, 2]
]

[0, 4, 3]
[null, 0, 0, 0, 0, 0, 0, 0]
[0, 4, 7]

[
  null, 
  [fuck off, 1], 
  [hola, 1], 
  [ffff, 1], 
  [suor, 1], 
  [just fuck off, 2], 
  [kutta, 2], 
  [man, 2]
]
*/