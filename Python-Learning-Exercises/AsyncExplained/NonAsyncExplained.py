import time


def my_func_1():
    print("Birinci fonk. başlıyor")
    time.sleep(5)
    print("Birinci fonk. bitti.")
    return 5


def my_func_2():
    print("İkinci fonk. başlıyor")
    time.sleep(5)
    print("İkinci fonk. bitti")
    return 10

if __name__ == "__main__":
    x=my_func_1()
    y=my_func_2()

    print(f"My func 1'in çalışması sonucu x'in değeri {x}")
    print(f"My func 1'in çalışması sonucu y'in değeri {y}")