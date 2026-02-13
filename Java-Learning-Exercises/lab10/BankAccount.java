/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lab10;

public class BankAccount {
    private double balance;

    // Yapıcı metod
    public BankAccount(double balance) {
        this.balance = balance;
    }

    // Bakiye artırma metodu
    public void deposit(double amount) {
        balance += amount;
    }

    // Para çekme metodu
    public void withdraw(double amount) throws InsufficientFundsException {
        if (amount > balance) {
            throw new InsufficientFundsException("Yetersiz bakiye. cekim islemi gerçeklestirilemedi.");
        }
        balance -= amount;
    }

    // Bakiye sorgulama metodu
    public double getBalance() {
        return balance;
    }
}
