#!/usr/bin/python3
"""
A function def island_perimeter(grid)
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid: List of list of integers (0 for water, 1 for land).
    return: Integer representing the perimeter of the island.
    """

    if not grid:
        return 0
    rows = len(grid)
    columns = len(grid[0])
    connected = 0
    p = 0
    for i in range(0, rows):
        for j in range(0, columns):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i - 1][j] == 1:
                    connected += 2
                if j > 0 and grid[i][j - 1] == 1:
                    connected += 2
    return p - connected
