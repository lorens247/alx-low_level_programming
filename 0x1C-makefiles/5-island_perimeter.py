#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid.

    Args:
    - grid (List[List[int]]): A list of lists representing the grid.
    - i (int): The row index of the cell.
    - j (int): The column index of the cell.

    Returns:
    - int: The number of water neighbors the cell has.
    """
    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid.

    Args:
    - grid (List[List[int]]): A list of lists representing the grid.
                              0 represents a water zone, and 1 represents a land zone.

    Returns:
    - int: The perimeter of the island.
    """
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim += num_water_neighbors(grid, i, j)

    return perim
