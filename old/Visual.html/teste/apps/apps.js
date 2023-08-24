function mostrarData() {
    const dataAtual = new Date();
    const elementoData = document.getElementById("data-atual");
    elementoData.textContent = "Data atual: " + dataAtual.toLocaleDateString();
}
