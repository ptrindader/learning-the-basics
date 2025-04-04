function cotacaoDolar(dolar) {
    let valorEmDolar = parseFloat(dolar).toFixed(2);
    let cotacaoHoje = 5.80; //04 de abril de 2025, 11h58.
    let valorEmReal = cotacaoHoje * valorEmDolar;
    return valorEmReal.toFixed(2);
}

let dolar = prompt('Quantos US$ você quer converter em reais (R$) ?');
let resultado = cotacaoDolar(dolar);

console.log(`O valor de US$ ${parseFloat(dolar).toFixed(2)} é igual a R$ ${resultado} na cotação de hoje.`);