class Tasks {
  String? name;
  bool? isdone;
  int? priority;

  Tasks({this.name, this.isdone, this.priority});
}

void main() {
  List tasksTodo = [
    Tasks(name: 'a', isdone: false, priority: 1),
    Tasks(name: 'b', isdone: false, priority: 1),
    Tasks(name: 'c', isdone: true, priority: 2),
    Tasks(name: 'd', isdone: true, priority: 2),
    Tasks(name: 'e', isdone: true, priority: 3),
    Tasks(name: 'f', isdone: false, priority: 3),
    Tasks(name: 'g', isdone: false, priority: 3),
  ];
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
