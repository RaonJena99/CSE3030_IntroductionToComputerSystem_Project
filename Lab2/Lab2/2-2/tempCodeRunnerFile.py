#!/usr/bin/python3
import os, sys
parent_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(parent_dir)
from helper import Program


# TODO: Rewrite this function (do not touch anything else).
def exploit():
    prog = Program("./strtest")
    print(prog.read_line())
    

if __name__ == "__main__":
    exploit()
