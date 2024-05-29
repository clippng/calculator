import tkinter as tk

from enum import Enum

WINDOW_HEIGHT = 1000
WINDOW_WIDTH = 450

#class Settings(Flags):


class Modifiers():
	NONE = 0
	SHIFT = 1
	ALPHA = 2

window = tk.Tk()
window.resizable(width=False, height=False)
dimensions = tk.Frame(window, width=WINDOW_WIDTH, height=WINDOW_HEIGHT)



buttons = list()

button = tk.Button(window, text='x', width=2, command=window.destroy, bg="red", justify="right")
button2 = tk.Button(window, text='2')
e = tk.Entry(window)

button.grid(row=0, column=0, sticky='W', pady=2)
button2.grid(row=1, column=0, sticky='W', pady=2)
e.grid(row=0, column=1, pady=2)



#will run forever
window.mainloop()