from tkinter import *
# creates tkinter window or root window
root = Tk()
root.geometry('200x100')

# function to be called when button-2 of mouse is pressed
def pressed2(event):
	print('Button-2 pressed at x = % d, y = % d'%(event.x, event.y))

# function to be called when button-3 of mouse is pressed
def pressed3(event):
	print('Button-3 pressed at x = % d, y = % d'%(event.x, event.y))

## function to be called when button-1 is double clocked
def double_click(event):
	print('Double clicked at x = % d, y = % d'%(event.x, event.y))

frame1 = Frame(root, height = 100, width = 200)

# these lines are binding mouse
# buttons with the Frame widget
frame1.bind('<Button-2>', pressed2)
frame1.bind('<Button-3>', pressed3)
frame1.bind('<Double 1>', double_click)

frame1.pack()

mainloop()
