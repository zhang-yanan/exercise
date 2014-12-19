#!/usr/bin/env python
#!encoding:utf-8
#!filename:test_filedialog.py

try:
   import tkinter.filedialog as filedialog
   from tkinter import *
except ImportErr:
   from Tkinter import *
   import tkFileDialog as filedialog

#import tkinter.filedialog as filedialog
#from tkinter import *

#global fob = 

root = Tk()
root.title("pick a file in tkinter")
#root.geometry("500x300")
frame = Frame(root, width = 500, height = 400)
frame.grid(row=0,column=0)
entry = Entry(frame,width=40)
entry.pack(side=TOP,anchor="nw")
canvas = Canvas(frame, width=500, height=200,background = "gray", bd=5, scrollregion = (0,0,500,500))
def mopen():
    global str
    entry.delete(0,END) #清空entry里面的内容
    #调用filedialog模块的askdirectory()函数去打开文件夹
    fileName = filedialog.askopenfilename(filetypes = (("python file","*.py"),("all","*.*")))
    if fileName:
        entry.insert(0,fileName)
        fob = open(fileName, 'r')
        #for i in range(0,5):
        i = 0
        str = fob.readlines()
        for x in str:
            canvas.create_text( 10, 20+i*20, anchor = "w", text="\n"+x,fill="black")
            i += 1
        fob.close()


#canvas.config(scrollregion=canvas.bbox(ALL))
#sbar = Scrollbar(canvas,orient = VERTICAL)
#sbar.config(command = canvas.yview)
#canvas.config(width=300,height=300)
#canvas.config(yscrollcommand=sbar.set)
#sbar.pack(side = RIGHT, fill = Y)
canvas.pack()

button = Button(frame,text="Open",command=mopen)
button.pack(side=TOP,anchor="nw")

button_exit = Button(frame,text=" Exit  ", command = root.destroy)
button_exit.pack(side=LEFT, anchor="w")
#canvas.create_text(0,10, anchor = "nw", text=str,fill="black")

root.mainloop()