〇色々なif文
・if (条件) 処理;
これで一行でifが掛ける、また
if (条件) 処理; else 処理;
とelseを続ける事も可能
・value = hensu1 == hensu2;
これで、hensu1と2がイコールの時のみ代入するという処理が書ける(可読性が微妙なため非推奨)

〇条件分岐まとめ
- 条件にあっている場合のみ処理
  ・処理が一つ / 単純
    if (条件) 処理;
  ・処理が複数 / 複雑
    if (条件) {
      処理;
      処理2;
    }

- 条件を満たしていない場合の処理も必要
  ・引数のみを分岐させたい場合
    printf("%d", (条件)? true の処理 : false の処理); // 引数部に記述
  ・通常
    if (条件) {
      処理;
    } else {
      処理;
    }

- 条件が複数ある
  ・条件によって何通りか分岐する場合、処理が複雑な場合
    if (条件) {
      処理;
    } else if (条件2) {
      処理;
    } else {
      処理;
    }
  ・比較ではなく変数や式の中身や結果によって分岐して、処理が単純な場合(値に式は使えない)
    switch(条件)
      case 値1:
        処理;
        break;
      case 値2:
        処理;
        break;
      default:
        elseの処理;
    }

〇演算子のポイントと、知らなかったやつ
・~=けいは、全部=が後に来る
・!は偽ならtrueを返す、何も付けないと真ならtrueを返すので、その逆バージョン
