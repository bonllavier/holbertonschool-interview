#!/usr/bin/python3
""" UTF-8 val"""


def validUTF8(data):
    """ utf-8 method validation """
    conf = 0
    utf8_valid = True
    try:
        for item in data:
            item = item & 0xff
            if conf == 0:
                if item >= 192 and item < 224:
                    conf = 1
                if item >= 224 and item < 240:
                    conf = 2
                if item >= 240 and item < 248:
                    conf = 3
                if item >= 128 and item < 192:
                    utf8_valid = False
                    return(utf8_valid)
            else:
                if not (item >= 128 and item < 192):
                    utf8_valid = False
                    return(utf8_valid)
                conf = conf-1
        if conf != 0:
            return False
        return True
    except Exception as e:
        return False
