#!/usr/bin/python3
"""
Island perimeter Module.
"""


def island_perimeter(grid):
    """
    Computes the perimeter of an island in a list of lists.
    """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    p = p + 1
                if i + 1 < len(grid) and grid[i + 1][j] == 0:
                    p = p + 1
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    p = p + 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 0:
                    p = p + 1
                if i - 1 < 0 or j - 1 < 0 or i + 1 > len(grid) or j + 1 > len(grid[i]):
                    p = p + 1
            j = j + 1
        i = i + 1
    return (p)
