from tkinter import *

def change_title(root):
    root.title("Button clicked")

root = Tk()
root.title("Button Example")

button = Button(root, text="Click Me!", command= change_title(root))
button.pack()

root.mainloop()
