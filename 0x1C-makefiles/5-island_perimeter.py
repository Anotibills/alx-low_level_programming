#!/usr/bin/python3

"""
Returns the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    perimeter = 0

    if grid:
        rows = len(grid)
        cols = len(grid[0])

        for row_idx, row in enumerate(grid):
            for col_idx, cell in enumerate(row):
                if cell:
                    if row_idx == 0:
                        perimeter += 1
                    else:
                        if not grid[row_idx - 1][col_idx]:
                            perimeter += 1

                    if row_idx >= rows - 1:
                        perimeter += 1
                    else:
                        if not grid[row_idx + 1][col_idx]:
                            perimeter += 1

                    if col_idx == 0:
                        perimeter += 1
                    else:
                        if not row[col_idx - 1]:
                            perimeter += 1

                    if col_idx >= cols - 1:
                        perimeter += 1
                    else:
                        if not row[col_idx + 1]:
                            perimeter += 1

    return perimeter
