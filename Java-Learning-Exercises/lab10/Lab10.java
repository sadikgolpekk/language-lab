/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.lab10;

import java.util.Scanner;

public class Lab10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Başlangıç bakiyesi ile hesap oluşturma
        BankAccount account = new BankAccount(1000.0);

        System.out.println("Mevcut bakiye: " + account.getBalance());
        System.out.print("cekmek istediginiz tutari girin: ");

        double amount = scanner.nextDouble();

        try {
            account.withdraw(amount);
            System.out.println("cekim ialemi başarili. Kalan bakiye: " + account.getBalance());
        } catch (InsufficientFundsException e) {
            System.out.println("Hata: " + e.getMessage());
        }

        scanner.close();
    }
}
