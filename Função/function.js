/*function dobrar (num) {
    valor = num * 2;
    return num;
}

var valor = 10;
console.log(dobrar(valor)); //20
console.log(valor); // 10 (valor original não mudou)*/

function saudacao(nome = "Visitante") {
    console.log(`Olá, ${nome}!`);
}
saudacao(); //Olá, Visitante!
saudacao("Edmar"); //Olá, Edmar!
console.log(saudacao("Edmar")); //Olá, Edmar!
