class Marca{
    constructor(nome){
        this.nome = nome;
    }

    falaMarca(){
        return `Eu sou o carro da marca ${this.nome}`;
    }
}

class Modelo extends Marca {
    constructor(marca,modelo){
        super(marca);
        this.modelo = modelo;
    }

    falarModelo(){
        return `${this.falarMarca()} e sou o modelo ${this.modelo}`;
    }
}

const carros = [
    new Modelo('Toyota', 'Camry'),
    new Modelo('Volkswagen', 'Golf'),
    new Modelo('Honda', 'CR-V'),
    new Modelo('Ford', 'Mustang'),
    new Modelo('Chevrolet', 'Corsa'),
]

console.table(carros)