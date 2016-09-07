#!/usr/bin/python3
import os

print("Hey there! What's your name?")
name = input()
if name == "":
	print("You can not have an empty name...")
else:
	print("Hello " + name + "! Nice to meet you!")

if os.name == "nt":
	input("Press any key to end...")
else:
	exit()
