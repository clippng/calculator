from enum import Enum

class KeyWords(Enum):
	
KEY_WORDS = ['+', '-', '/', '*']

def interpret(command):
	instructions = list() #whatever c can read as an array
	commands = command.lower().split()
	for i in range(len(commands)):
		if commands[i] in KEY_WORDS:
			
