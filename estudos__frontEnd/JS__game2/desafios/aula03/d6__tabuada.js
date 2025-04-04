function tabuada (numero) {
    for (i = 1; i <= 10; i++){
        let resultado = numero * i;
        console.log(`${numero} x ${i} = ${resultado}`);
    };
}

let numero = parseInt(prompt('Insira um número para saber a tabuada dele!'));
tabuada(numero); 