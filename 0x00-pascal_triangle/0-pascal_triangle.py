#!/usr/bin/python3
"""Pascal's Triangle"""

def pascal_triangle(n):
    """Generates Pascal's Triangle in the form of alist of lists,
    where each inner list represent a row int in the Triangle
    """

    if n <= 0:
        return []
    pList = []
    for i in range(n):
        cList = []
        cList.append(1)
        if i > 0:
            lsList = pList[i - 1]
            if len(lsList) < 2:
                cList.append(1)
            else:
                for j in range(len(lsList) - 1):
                    cList.append(lsList[j] + lsList[j + 1])
                cList.append(1)
        pList.append(cList)
    return pList
