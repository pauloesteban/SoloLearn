package com.company;

import java.util.Random;


public class Main {

    static void QuickSort(int arr[], int extremo_izq, int extremo_der) {
        int izq = extremo_izq;
        int der = extremo_der - 1;
        int tamano = extremo_der - extremo_izq;

        if(tamano > 1) {
            // 1. Selección del pivote
            Random posicion = new Random();
            int pivote = arr[posicion.nextInt(tamano) + izq];

            // 2. Partición
            while(izq < der) {
                while(arr[der] > pivote && der > izq) {
                    der--;
                }

                while(arr[izq] < pivote && izq <= der) {
                    izq++;
                }

                if(izq < der) {
                    int temp = arr[izq];
                    arr[izq] = arr[der];
                    arr[der] = temp;
                    izq++;
                }
            }

            // 3. Recursión
            QuickSort(arr, extremo_izq, izq);
            QuickSort(arr, der, extremo_der);
        }
    }

    static void imprimirArreglo(int arr[]) {
        int n = arr.length;
        for(int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int arr[] = {1, 12, 5, 26, 7, 14, 3, 7, 2};
        QuickSort(arr, 0, arr.length);
        imprimirArreglo(arr);
    }
}
