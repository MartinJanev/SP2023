/* Бројаница е „број“ добиен со слепување на првите N броеви, по редослед. На пример, за N=4 тоа е 1234, за N=11 тоа е
 * 1234567891011. Обратна бројаница е слично како погоре, но се започнува од N па броевите се слепуваат обратно. Така за
 * N=5 тоа е 54321.

За дадено N, на екран испишете ги по редослед: Бројаница за 1, обратна бројаница за 1, бројаница за 2, обратна бројаница
за 2…, се така до обратна бројаница за N.

На пример, за N=5 треба да отпечатите:

1
1
12
21
123
321
1234
4321
12345
54321 */

#include <iostream>
using namespace std;

int main() {
    int i, j, N;
    cin >> N;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
        for (j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}