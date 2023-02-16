from tkinter import *

win = Tk() 
win.geometry("312x324")  #size of the window 
win.title("Calculator")


# updates the input field whenever you enter a number
def btn_click(item):
    global expression
    expression = expression + str(item)
    input_text.set(expression)


#clear the input field
def bt_clear(): 
    global expression 
    expression = "" 
    input_text.set("")


#calculates the expression 
def bt_equal():
    global expression
    result = str(eval(expression)) #used to evaluate the string expression directly
    input_text.set(result)
    expression = ""

expression = ""

#get the instance of input field
input_text = StringVar()

#frame for the input field
input_frame = Frame(win, width=312, height=50)
input_frame.pack(side=TOP)

input_field = Entry(input_frame, font=(18), textvariable=input_text, width=50)
input_field.grid(row=0, column=0)
input_field.pack()
 
#Frame for buttons
btns_frame = Frame(win, width=312, height=272.5)
btns_frame.pack()

# first row
clear = Button(btns_frame, text = "C", width = 32, 
    height = 3, command = lambda: bt_clear()).grid(row = 0, column = 0, columnspan = 3)
divide = Button(btns_frame, text = "/", width = 10, 
    height = 3, command = lambda: btn_click("/")).grid(row = 0, column = 3)
 
# second row
seven = Button(btns_frame, text = "7", width = 10, 
    height = 3, command = lambda: btn_click(7)).grid(row = 1, column = 0)
eight = Button(btns_frame, text = "8", width = 10, 
    height = 3, command = lambda: btn_click(8)).grid(row = 1, column = 1)
nine = Button(btns_frame, text = "9", width = 10, 
    height = 3, command = lambda: btn_click(9)).grid(row = 1, column = 2)
multiply = Button(btns_frame, text = "*", width = 10, 
    height = 3, command = lambda: btn_click("*")).grid(row = 1, column = 3)
 
# third row
four = Button(btns_frame, text = "4", width = 10, 
    height = 3, command = lambda: btn_click(4)).grid(row = 2, column = 0)
five = Button(btns_frame, text = "5", width = 10, 
    height = 3, command = lambda: btn_click(5)).grid(row = 2, column = 1)
six = Button(btns_frame, text = "6", width = 10, 
    height = 3, command = lambda: btn_click(6)).grid(row = 2, column = 2)
minus = Button(btns_frame, text = "-", width = 10, 
    height = 3, command = lambda: btn_click("-")).grid(row = 2, column = 3)
 
# fourth row
one = Button(btns_frame, text = "1", width = 10, 
    height = 3, command = lambda: btn_click(1)).grid(row = 3, column = 0)
two = Button(btns_frame, text = "2", width = 10, 
    height = 3, command = lambda: btn_click(2)).grid(row = 3, column = 1)
three = Button(btns_frame, text = "3", width = 10, 
    height = 3, command = lambda: btn_click(3)).grid(row = 3, column = 2)
plus = Button(btns_frame, text = "+", width = 10, 
    height = 3, command = lambda: btn_click("+")).grid(row = 3, column = 3)
 
# fourth row
zero = Button(btns_frame, text = "0", width = 21, 
    height = 3, command = lambda: btn_click(0)).grid(row = 4, column = 0, columnspan = 2)
point = Button(btns_frame, text = ".", width = 10, 
    height = 3, command = lambda: btn_click(".")).grid(row = 4, column = 2)
equals = Button(btns_frame, text = "=", width = 10, 
    height = 3, command = lambda: bt_equal()).grid(row = 4, column = 3)
 
win.mainloop()
