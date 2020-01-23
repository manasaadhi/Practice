from tkinter import *
from sqlite3 import *
from tkinter.messagebox import *
import sys

root = Tk()
root.geometry('800x800')
root.title("Registration Form")

Email=StringVar()
Password=StringVar()

def quit():
    sys.exit(0)

def database():
        Email=EmailId.get()
        Pswd=Password.get()
        conn=sqlite3.connect("user_db")
        with conn:
            conn.execute('CREATE TABLE IF NOT EXISTS Student (Fullname TEXT,Email TEXT,Gender TEXT,country TEXT,UNIQUE(Fullname,Email))')
            conn.execute('INSERT INTO Student (FullName,Email,Gender,country) VALUES(?,?,?,?)',(name1,email,gender,country,))
        conn.commit()


label_1 = Label(root, text="EmailId",width=20,font=("bold", 10)).place(x=80,y=130)
label_2 = Label(root, text="Password",width=20,font=("bold", 10)).place(x=68,y=180)
userId = Entry(root,textvar=userId).place(x=240,y=130)
pwd= Entry(root,textvar=pwd).place(x=240,y=180)

def get_values():
    EmailId=userId.get()
    if EmailId is None:
        print(showinfo("showinfo", "Enter Email Id"))
    userId.set('')
    
    Password=pwd.get()
    if Password is None:
        print("shoinfo","Enter Password")
    pwd.set('')

Button(root, text='Submit',width=20,bg='brown',fg='white',command=submit).place(x=85,y=380)
Button(root, text='Quit',width=20,bg='brown',fg='white',command=quit).place(x=300,y=380)

root.mainloop()

