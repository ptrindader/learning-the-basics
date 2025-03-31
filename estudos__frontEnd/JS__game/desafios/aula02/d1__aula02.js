let diaDaSemana = prompt('Qual dia da semana é hoje?').toLowerCase;
let fimDeSemana = ['sabado', 'domingo'];


if (fimDeSemana.includes(diaDaSemana)) {
    alert('Bom FIM de semana!');
} else {
    alert('Boa semana!');
}