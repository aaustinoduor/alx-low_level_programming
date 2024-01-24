#!/usr/bin/python3
"""Defines island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for r in range(width):
            if grid[k][r] == 1:
                size += 1
                if (r > 0 and grid[k][r - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][r] == 1):
                    edges += 1
    return size * 4 - edges * 2
