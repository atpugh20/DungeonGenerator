from Square import Square
from Vec2 import Vec2
from Path import Path

class Application:
    def __init__(self):
        pass

    def Run(self):

        path = Path(Square(Vec2(1, 2), "W"))

        path = Path(Square(Vec2(3, 3), "W"), path)

        path.Print()