class Renderer {
    constructor() {
        this.Canvas = document.getElementById("canvas");
        if (this.Canvas) {
            this.CTX = this.Canvas.getContext("2d");
            console.log(this.CTX);
        } else {
            console.log("Not got");
        }

        this.ScreenDimension = 600;
        this.FPS = 60;

        this.GridCount = 50;
        this.SquareSize = this.ScreenDimension / this.GridCount
    }

    Setup() {
        this.Canvas.width = this.Canvas.height = this.ScreenDimension;
    }

    FillGrid() {
        for (let i = 0; i < this.GridCount; i++) {
            for (let j = 0; j < this.GridCount; j++) {
                let x = j * this.SquareSize;
                let y = i * this.SquareSize;
                this.CTX.fillStyle = `rgb(${y}, 255, ${x})`;
                this.CTX.fillRect(x, y, this.SquareSize - 1, this.SquareSize - 1);
            }
        }
    }


    Draw(timestamp) {
        this.FillGrid();
        requestAnimationFrame((t) => this.Draw(t));
    }

}