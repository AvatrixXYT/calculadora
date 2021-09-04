#include <iostream> 
using namespace std;

int main(){
    
    int opsion, n1, n2;
    cout << "que quieres aser 1 suma 2 resta 3 multiplicasion 4 division \n";
    cin >> opsion;
    if (opsion == 1){
        cout << "escribe el primer numero \n";
        cin >> n1;
        cout << "ahora el segundo \n";
        cin >> n2;
        cout << "el resultado es \n";
        cout << n1 + n2;
    }
        if (opsion == 2){
        cout << "escribe el primer numero \n";
        cin >> n1;
        cout << "ahora el segundo \n";
        cin >> n2;
        cout << "el resultado es \n";
        cout << n1 - n2;
    }
            if (opsion == 3){
        cout << "escribe el primer numero \n";
        cin >> n1;
        cout << "ahora el segundo \n";
        cin >> n2;
        cout << "el resultado es \n";
        cout << n1 * n2;
}
        if (opsion == 4){
        cout << "escribe el primer numero \n";
        cin >> n1;
        cout << "ahora el segundo \n";
        cin >> n2;
        cout << "el resultado es \n";
        cout << n1 / n2;
        }
        return 0;
}
