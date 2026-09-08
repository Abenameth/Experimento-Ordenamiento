#include <iostream>
#include <vector>
#include <chrono>
#include <random>
using namespace std;

int busquedaLineal(const vector<int>& a,int t){
    for (int i = 0;i < a.size();i++) {
        if (a[i] == t) {
            return i;
        }
    }
    return -1;
} //complejidad (n)

int busquedaBinaria(const vector<int>& a, int t) {
    int l = 0;
    int r = a.size() - 1;
    while (l <= r) {
        int m = l + (r-l)/2;
        if (a[m] == t) {
            return m;
        }else if (a[m] < t) {
            l = m + 1;
        }else {
            r = m - 1;
        }
    }
    return -1;
} //complejidad O(log2 n)

int busquedaTrinaria(const vector<int>& a, int t) {
    int l = 0;
    int r = a.size() - 1;
    while (l <= r) {
        int m1 = l + (r-l)/3;
        int m2 = r - (r-l)/3;
        if (a[m1] == t) return m1;
        if (a[m2] == t) return m2;

        if (a[m1] > t) {
            r = m1-1;
        }else if (a[m2] < t) {
            l = m2+1;
        }else{
            l = m1+1;
            r = m2-1;
        }
    }
    return -1;
} //complejidad O(log3 n)

int main(){
    random_device rd;
    mt19937 gen(rd());

    cout << "======Experimento 10^5======" << endl;
    {
        vector<int> a(100000);
        vector<int> t(30);
        uniform_int_distribution<int> distribucion(0, a.size()-1);
        for (int i = 0; i < a.size(); i++) {
            a[i] = i;
        }
        for (int i = 0; i < 30; i++) {
            t[i] = distribucion(gen);
        }
        double tTotal = 0;

        cout << "Resultados promedio Lineal:" << endl;
        int temp = 0;
        auto inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaLineal(a,t[i]);
        }
        auto fin = chrono::high_resolution_clock::now();
        tTotal+= chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Binaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaBinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Trinaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaTrinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
    }

    cout << "======Experimento 10^6======" << endl;
    {
        vector<int> a(1000000);
        vector<int> t(30);
        uniform_int_distribution<int> distribucion(0, a.size()-1);
        for (int i = 0; i < a.size(); i++) {
            a[i] = i;
        }
        for (int i = 0; i < 30; i++) {
            t[i] = distribucion(gen);
        }
        double tTotal = 0;

        cout << "Resultados promedio Lineal:" << endl;
        int temp = 0;
        auto inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaLineal(a,t[i]);
        }
        auto fin = chrono::high_resolution_clock::now();
        tTotal+= chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Binaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaBinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Trinaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaTrinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
    }

    cout << "======Experimento 10^7======" << endl;
    {
        vector<int> a(10000000);
        vector<int> t(30);
        uniform_int_distribution<int> distribucion(0, a.size()-1);
        for (int i = 0; i < a.size(); i++) {
            a[i] = i;
        }
        for (int i = 0; i < 30; i++) {
            t[i] = distribucion(gen);
        }
        double tTotal = 0;

        cout << "Resultados promedio Lineal:" << endl;
        int temp = 0;
        auto inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaLineal(a,t[i]);
        }
        auto fin = chrono::high_resolution_clock::now();
        tTotal+= chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Binaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaBinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Trinaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaTrinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
    }

    cout << "======Experimento 10^8======" << endl;
    {
        vector<int> a(100000000);
        vector<int> t(30);
        uniform_int_distribution<int> distribucion(0, a.size()-1);
        for (int i = 0; i < a.size(); i++) {
            a[i] = i;
        }
        for (int i = 0; i < 30; i++) {
            t[i] = distribucion(gen);
        }
        double tTotal = 0;

        cout << "Resultados promedio Lineal:" << endl;
        int temp = 0;
        auto inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaLineal(a,t[i]);
        }
        auto fin = chrono::high_resolution_clock::now();
        tTotal+= chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns"  << endl;
        tTotal = 0;

        cout << "Resultados promedio Binaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaBinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
        tTotal = 0;

        cout << "Resultados promedio Trinaria:" << endl;
        inicio = chrono::high_resolution_clock::now();
        for (int i = 0; i < 30;i++) {
            temp += busquedaTrinaria(a,t[i]);
        }
        fin = chrono::high_resolution_clock::now();
        tTotal += chrono::duration<double, nano>(fin - inicio).count();
        cout << tTotal/30 << " ns" << endl;
    }
}