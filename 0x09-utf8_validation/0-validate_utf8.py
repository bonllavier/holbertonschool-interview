#!/usr/bin/python3
""" UTF-8 val"""


def validUTF8(data):
    """ utf-8 method validation """
    try:
        utf8_valid = True
        for item in data:
            item = item & 0xff
            if item >= 192 and item < 224:
                utf8_valid = False
            if item >= 224 and item < 240:
                utf8_valid = False
            if item >= 240 and item < 248:
                utf8_valid = False
            if item >= 128 and item < 192:
                utf8_valid = False
        return(utf8_valid)
    except:
        return False
