class Cliente{
    constructor(nome, cpf, email, telefone){
        this.nome = nome;
        this.cpf = cpf;
        this.email = email;
        this.telefone = telefone;
    }
    getNome(){
        return this.nome;
    }
    setNome(nome){
        this.nome = nome;
    }
    getCpf(){
        return this.cpf;
    }
    setcpf(cpf){
        this.cpf = cpf;
    }
    getEmail(){
        return this.email;
    }
    setEmail(email){
        this.email = email;
    }
    getTelefone(){
        return this.telefone;
    }
    setTelefone(telefone){
        this.telefone = telefone;
    }
    toString(){
        return " Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEmail: " + this.email + "\nTelefone: " + this.telefone;
    }
}

const cliente = [
    new Cliente ('Sofia ','123.456.789-10', 'Sofia @gmail.com', '13912-123'),
    new Cliente ('Mateus','123.456.789-11', 'Mateus@gmail.com', '13912-124'),
    new Cliente ('Isabella','123.456.789-12', 'Isabella@gmail.com', '13912-125'),
    new Cliente ('Gabriel','123.456.789-13', 'Gabriel@gmail.com', '13912-126'),
    new Cliente ('Valentina','123.456.789-14', 'Valentina@gmail.com', '13912-127'),
    new Cliente ('Leonardo','123.456.789-15', 'Leonardo@gmail.com', '13912-128'),
    new Cliente ('Clara','123.456.789-16', 'Clara @gmail.com', '13912-129'),
    new Cliente ('Lucas','123.456.789-17', 'Lucas@gmail.com', '13912-110'),
    new Cliente ('Helena','123.456.789-18', 'Helena@gmail.com', '13912-111'),
    new Cliente ('Miguel','123.456.789-19', 'Miguel@gmail.com', '13912-112'),
]

console.table(cliente)
