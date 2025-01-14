void main() {
  var arr = [];
  for (var i = 0; i < 9; i++) {
    arr.add(0);
  }
  var player1 = 'p1', player2 = "p2";
  display(arr);

  get_input(arr, player1, a: 4, b: 3, c: 5);
  display(arr);
  print(chek_won(arr));

  get_input(arr, player2, a: 0, c: 6);
  display(arr);
  print(chek_won(arr));
}

display(arr) {
  print("____________________");
  print("${arr[0]}\t${arr[1]}\t${arr[2]}");
  print("${arr[3]}\t${arr[4]}\t${arr[5]}");
  print("${arr[6]}\t${arr[7]}\t${arr[8]}");
  print("____________________");
}

get_input(arr, player, {a = -1, b = -1, c = -1}) {
  a != -1 ? arr[a] = player : 0;
  b != -1 ? arr[b] = player : 0;
  c != -1 ? arr[c] = player : 0;
}

chek_won(arr) {
  for (var i = 0; i < 9; i += 3) {
    if (arr[i] == arr[i + 1] &&
        arr[i + 1] == arr[i + 2] &&
        arr[i + 2] == arr[i] &&
        arr[i] != 0) {
      return "won";
    }
  }
  for (var i = 0; i < 3; i++) {
    if (arr[i] == arr[i + 3] &&
        arr[i + 3] == arr[i + 6] &&
        arr[i + 6] == arr[i] &&
        arr[i] != 0) {
      return "won";
    }
  }
  if (arr[1] == arr[4] && arr[4] == arr[8] && arr[8] == arr[1] && arr[4] != 0) {
    return "won";
  }
  if (arr[2] == arr[4] && arr[4] == arr[6] && arr[6] == arr[2] && arr[4] != 0) {
    return "won";
  }
  return "null";
}
