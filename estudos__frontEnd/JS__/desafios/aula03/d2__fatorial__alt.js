function calcularFatorial(numero) {
    
    console.log(`Fatorial de ${numero}:`);
    
    if (numero === 0 || numero === 1) {
        return 1;
    }
    
    let fatorial = numero;
    
    for (i = numero-1; i >= 1; i--) {
        console.log(`${fatorial} x ${i} = ${fatorial * i} `);
        fatorial *= i;
    };

    return fatorial;
}

//Usando:

let numero = prompt('Escolha um número para calcular o fatorial');
let resultado = calcularFatorial(numero);
alert(resultado);
console.log(`O fatorial de ${numero} é igual a ${resultado}.`);