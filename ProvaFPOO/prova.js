class decoracao{
    constructor(tipo){
        this.tipo = tipo;
    }
}

class livro{
    constructor(titulo){
        this.titulo = titulo;
    }
}

class estante {
    constructor(){
        this.decoracoes = [];
        this.livro = []; 
    }

    addLivro(livro){
        this.livro.push(livro);
    }
    addDecoracoes(decoracoes){
        this.decoracoes.push(decoracoes);
    }
}

const estante1 = new estante()
const estante2 = new estante()
const estante3 = new estante()

estante2.addLivro(new livro('Dom Quixote'))
estante2.addLivro(new livro('Cem Anos de Solidão'))

estante3.addLivro(new livro('1984'))
estante3.addDecoracoes(new decoracao('Sofá'))

estante3.addDecoracoes(new decoracao('Tv'))
estante3.addDecoracoes(new decoracao('Cadeira'))
estante3.addDecoracoes(new decoracao('Ventilador'))

console.log(estante1)
console.log(estante2)
console.log(estante3)
