#!/usr/bin/python3
"""
min file file
"""


def minOperations(n):
    num = 0
    if n <= 1:
        return num
    else:
        for item in range(2, n + 1):
            if n % item == 0:
                tmp_i = int(n / item)
                return minOperations(tmp_i) + item
