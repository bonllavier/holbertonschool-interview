#!/usr/bin/python3
""" stats file"""
import sys
code_dict = {"200": 0, "301": 0, "400": 0, "401": 0,
             "403": 0, "404": 0, "405": 0, "500": 0}
total_size = 0
cont_1 = 0
try:
    for in_line in sys.stdin:
        list_args = in_line.split(" ")
        if len(list_args) > 2:
            size = int(list_args[-1])
            code = str(list_args[-2])
            if code in code_dict:
                code_dict[code] += 1
            total_size += size
            cont_1 += 1
        if cont_1 == 10:
            print("File size: {:d}".format(total_size))
            for term, value in sorted(code_dict.items()):
                if code_dict[term] != 0:
                    print("{:}: {:d}".format(term, value))
            cont_1 = 0
except Exception:
    pass
finally:
    print("File size: {:d}".format(total_size))
    for term, value in sorted(code_dict.items()):
        if code_dict[term] != 0:
            print("{:}: {:d}".format(term, value))
