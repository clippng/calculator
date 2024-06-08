import tkinter as tk

from enum import Enum

from ctypes import c_char

WINDOW_HEIGHT = 1000
WINDOW_WIDTH = 1000



#class Settings(Flags):


class Modifiers():
	NONE = 0
	SHIFT = 1
	ALPHA = 2

window = tk.Tk()
window.resizable(width=False, height=False)
dimensions = tk.Frame(window, width=WINDOW_WIDTH, height=WINDOW_HEIGHT)


clear_button = tk.Button(window, text='Clear', width=2, command=window.destroy, bg="red")
enter_button = tk.Button(window, text='Enter', width=6)
command_line = tk.Entry(window)

clear_button.grid(row=1, column=4, sticky='W', pady=5, padx=5)
enter_button.grid(row=1, column=0, sticky='W', pady=5, padx=5)
command_line.grid(row=0, column=0, columnspan=4, pady=5, padx=5)




#will run forever
window.mainloop()