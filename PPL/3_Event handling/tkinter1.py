from tkinter import *
window = Tk()
greeting = Label(text="hello,tkinter")
label = Label(
    text = "new",
    background= "black",
    foreground= "white",
    width=100,
    height=5
)
button = Button(
    text="Click me!",
    width=25,
    height=5,
    bg="blue",
    fg="yellow",
)
Button(window,text="press",command=window.quit).pack(side=LEFT)
entry = Entry(fg="white", bg="black", width=50)
name = entry.get()
greeting.pack()
label.pack()
entry.pack()
button.pack()
window = mainloop()

