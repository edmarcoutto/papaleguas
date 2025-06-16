//FUNÇÃO 1
/*function dobrar (num) {
    valor = num * 2;
    return num;
}

var valor = 10;
console.log(dobrar(valor)); //20
console.log(valor); // 10 (valor original não mudou)*/

//FUNÇÃO 2
/*function saudacao(nome = "Visitante") {
    console.log(`Olá, ${nome}!`);
}
saudacao(); //Olá, Visitante!
saudacao("Edmar"); //Olá, Edmar!
console.log(saudacao("Edmar")); //Olá, Edmar!*/

//FUNÇÃO 3
function adicionarItem(lista) {
    lista.push("Novo Item");
}

let item = ["Item 1", "Item 2"];
adicionarItem(itens);
console.log(itens); // ["Item 1", "Item 2", "Novo item"]
