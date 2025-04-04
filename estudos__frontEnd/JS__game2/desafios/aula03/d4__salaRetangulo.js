function perimetroEAreaSala(altura, largura) {
    altura = parseFloat(altura); //Precisa disso pois o 'prompt' recebe valores em string, o que pode alterar o resultado.
    largura = parseFloat(largura);

    let area = altura * largura;
    let perimetro = (altura + largura) * 2;

    console.log(`Perímetro: (${altura} + ${largura}) * 2 = ${perimetro} m.\n`)
    console.log(`Área: ${altura} * ${largura} = ${area} m².\n`)
}

let altura = prompt('Altura da sala:');
let largura = prompt('Largura da sala:');
    
perimetroEAreaSala(altura, largura);