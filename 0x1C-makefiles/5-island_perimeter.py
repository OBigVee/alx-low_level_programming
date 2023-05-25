#!/usr/bin/python3
"""
    Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid:

grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the
water around the island)
"""


def island_perimeter(grid):
    """
        returns the perimeter of the island described in grid
    """
    visit = set()

    def DFS(i, j):
        if i >= len(grid) or j >= len(grid[0]) or i < 0 or j < 0 or grid[i][j] == 0:
            return 1

        if (i, j) in visit:   # if position has been visited
            return 0

        visit.add((i, j))
        perim = DFS(i, j+1)
        perim += DFS(i+1, j)
        perim += DFS(i, j-1)
        perim += DFS(i-1, j)
        return perim

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                return DFS(i, j)
