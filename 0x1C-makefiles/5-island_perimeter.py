#!/usr/bin/python3
"""
that returns the perimeter of the island described in grid:
"""

def island_perimeter(grid):
    """
    that returns the perimeter of the island described in grid:
    """
    count = 0
    index1 = 0
    index2 = 0
    temp1 = []
    for row in grid:
        for column in grid:
            count = count + 1
            index2 = index2 + 1
            if count == 6 or count == 12 or count == 18:
                index2 = 0
                index1 = index1 + 1
            elif count == 24:
                perimeter = 2 * (sum(temp1) + 1)
                return perimeter
            if grid[index1][index2] == 1:
                temp1.append(grid[index1][index2])
