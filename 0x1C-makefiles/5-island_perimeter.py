#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.
    Args:
    grid: The grid representing the island.
    Returns:
    int: perimeter of the island.
    """
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                perimeter += 4  # Start by adding 4 sides

                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 1
                if row < len(grid) - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column < len(grid[0]) - 1 and grid[row][column + 1] == 1:
                    perimeter -= 1

    return perimeter
