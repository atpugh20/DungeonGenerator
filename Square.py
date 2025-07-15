from Vec2 import Vec2

class Square:
    def __init__(self, position: Vec2, type: str):
        self.Pos = position
        self.Type = type
    
    def __str__(self):
        return f"[ {self.Type} ]"