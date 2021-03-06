〇構造体
・構造体名の事を、構造体タグ名という
・型名ではないけど、型名のように扱う
・地味に、構造体の変数同士で代入できる
deftype struct {
  int id;
  int data;
} Struct1;

Struct1 test1 = {1,50};
Struct1 test2;
test2 = test1;

〇構造体に含まれているの配列データ
・構造体の配列は、引数として使う場合、値渡しで行われる
そのため呼び出し先で操作されても元の配列に影響しない
・値渡しという事は、コピーするということなので、配列のサイズが大きい場合処理が重くなる


〇構造体とポインタ
・構造体のポインタ変数も、普通の変数と同じように作れる
・構造体のポインタ変数を、通常変数モードで扱う時は、以下のどちらかの書きかたをする
Struct1 test1 = {1,50};
Struct1 &pointer;
pointer = &test1;

(*pointer).id
pointer->id // こちらが一般的らしい


〇構造体と引数
・これも通常の変数と同様
void kansu(Struct1 *data){}
・構造体の場合、中身のデータが大きい場合がある、その場合、ポインタで渡した方がコピー分の処理をなくして高速化する事ができる


〇構造体の配列
・こちらも通常のデータ型同様、配列を作成出来る
Struct1 array[10];
array[1].id = 2;
・もちろん、配列はポインタと同じ扱いを出来るので array->id は array[0].idと一緒の意味になる
・そして引数として渡す場合も、普通の変数と同じ
