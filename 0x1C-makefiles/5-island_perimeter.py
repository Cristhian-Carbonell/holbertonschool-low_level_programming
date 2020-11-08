#!/usr/bin/python3
"""
that returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """
    that returns the perimeter of the island described in grid:
    """
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                try:
                    if grid[row - 1][column] == 0 or row == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                
                try:
                    if grid[row + 1][column] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[row][column - 1] == 0 or column == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[row][column + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
    return perimeter