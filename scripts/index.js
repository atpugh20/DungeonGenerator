document.addEventListener("DOMContentLoaded", () => {
    const renderer = new Renderer();

    renderer.Setup();

    requestAnimationFrame((t) => renderer.Draw(t));
});