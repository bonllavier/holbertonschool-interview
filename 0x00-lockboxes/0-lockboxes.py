#!/usr/bin/python3
def canUnlockAll(boxes):
    box_status = []
    for item in boxes:
        box_status.append(0)
    box_status[0] = 1
    for item in range(len(boxes)):
        for item2 in boxes[item]:
            if box_status[item] != 0:
                box_status[item2] = 1
    new_box_list = []
    while True:
        if new_box_list != box_status:
            new_box_list = box_status.copy()
            for item in range(len(boxes)):
                for item2 in boxes[item]:
                    if box_status[item] != 0:
                        box_status[item2] = 1
        else:
            break
    if 0 in box_status:
        return False
    else:
        return True
