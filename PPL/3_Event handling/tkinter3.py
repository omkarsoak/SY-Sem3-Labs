from tkinter import *
def function1():
    print("my name is omkar")

window = Tk()
button1 = Button(window,text="click me",command=window.quit)
button2 = Button(
    window,
    text = "fancy button",
    height=10,
    width=20,
    bg="green",
    command=function1,
)
button1.pack()
button2.pack()
window = mainloop()