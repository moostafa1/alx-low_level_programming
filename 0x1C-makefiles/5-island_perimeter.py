#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Args:
    grid: part to get its parameter

    Return:
    the perimeter of the island described in grid
    """

    if not grid or not len(grid):
        return 0

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
