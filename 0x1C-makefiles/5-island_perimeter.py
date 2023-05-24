#!/usr/bin/python3
"""This module defines a function that measures an island perimeter."""


def island_perimeter(grid):
    """The function returns the perimiter of an island.
    The grid list of integers has 0 represent water zone and 1 land zone.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for y in range(height):
        for x in range(width):
            if grid[y][x] == 1:
                size += 1
                if (x > 0 and grid[y][x - 1] == 1):
                    edges += 1
                if (y > 0 and grid[y - 1][x] == 1):
                    edges += 1
    return size * 4 - edges * 2
