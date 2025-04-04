function areaPerimetroCirculo(raio) {
    raio = parseFloat(raio);

    let perimetro = (2 * Math.PI * raio).toFixed(2);
    let area = (Math.PI * (raio ** 2)).toFixed(2);

    console.log(`Perimetro = ${perimetro}m.\nÁrea = ${area}m².`)
};

let raio = prompt('Qual o raio da sala?');
areaPerimetroCirculo(raio);