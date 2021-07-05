#!/usr/bin/python3
"""Island Perimeter - module"""


def island_perimeter(grid):
    """island_perimeter - function"""

    n = len(grid)
    m = len(grid[0])

    def cal_sid(r, c):
        """Caculates the value according sides"""
        if r < 0 or r >= n or c < 0 or c >= m or grid[r][c] == 0:
            return 1
        if grid[r][c] == 1:
            grid[r][c] = 2
            return cal_sid(r - 1, c) + cal_sid(r + 1, c) +\
                cal_sid(r, c - 1) + cal_sid(r, c + 1)
        return 0

    perimeter = 0
    for r in range(n):
        for c in range(m):
            if grid[r][c] == 1:
                perimeter += cal_sid(r, c)

    return perimeter
