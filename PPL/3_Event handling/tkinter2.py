#handling event using button (widgets)
import sys
from tkinter import *
#root = Tk()
def quit1():
    print("hello i am going")
    sys.exit()
def hello(event):
    print("press twice to exit")

widget = Button(None,text="hello event world")
widget.pack()
widget.bind('BUtton1',hello)
widget.bind('Button2',quit)
widget2 = Button(None,text="press",command=quit1)
widget2.pack()
widget.mainloop()