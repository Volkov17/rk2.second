#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"RUS");
    int i,n,k,len;
    cin >> n;
    if (n<=0 ) {
        cout << "введите положительное число";
        return 0;
    }
    int *arr= new int [n];

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
        cin >> k;
        if (k>0 && k<=n)  {
        int arr1[k - 1], arr2[n - k - 1];
        for (i = 0; i < k; i++) {
            arr1[i] = arr[i];
        }
        for (i = 0; i < n - k; i++) {
            arr2[i] = arr[i + k];
        }
        for (i = 0; i < n - k; i++) {
            cout << arr2[i] << " ";
        }
        for (i = 0; i < k; i++) {
            cout << arr1[i] << " ";
        }
    }
    else {cout <<"введите положительное  k или меньшее n";}
    return 0;
}
