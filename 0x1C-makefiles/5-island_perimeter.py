#!/usr/bin/python3
"""import module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described"""
    count = 0
    lgth = len(grid) - 1
    w = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == w or grid[i][j + 1] != 1:
                    count += 1
                if i == lgth or grid[i + 1][j] != 1:
                    count += 1
    return count
