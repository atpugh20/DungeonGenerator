from Square import Square

class Path:
    def __init__(self, current: Square, prev = None):
        self.Current = current
        self.Prev = prev

    def Print(self):
        temp = self
        print("Head")

        while temp != None:
            print(temp.Current)
            temp = temp.Prev

        print("END")


    def Add(self, next_square: Square):
        new_path = Path(next_square, self)
        self = new_path