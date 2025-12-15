import sqlite3

connection=sqlite3.connect("chinook.db")
cursor=connection.cursor() # cursor kullanarak sorgularamızı yazacağız

sql="INSERT INTO genres(name) VALUES('Macera')"
cursor.execute(sql)
connection.commit()


cursor.execute("select * from customers")
result=cursor.fetchall()

for customer in result:
    print(customer)



connection.close()

print("veritabanı bağlantısı hazır.")