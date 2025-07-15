from Square import Square
from Vec2 import Vec2

class Application:
    def __init__(self):
        pass

    def Run(self):
        squares = []
        for i in range(10):
            squares.append(Square(Vec2(i, 1), "W"))


        for s in squares:
            print(s, sep="", end="")