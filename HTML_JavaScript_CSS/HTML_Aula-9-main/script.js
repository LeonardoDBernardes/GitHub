let saida = document.getElementById("saida");

let imprimir = "";

let lista = [
    ["Limão", 10],
    ["Banana", 8],
    ["Cenoura", 15],
    ["Chuchu", 15],
    ["Abobora", 14],
    ["Tomate", 13]
];

imprimir += "<table>";
imprimir += '<thead> <tr> <th scope="col">Produto</th> <th scope="col">Preço</th> </tr> </thead>';

for(let i = 0; i < lista.length; i++){
    imprimir += "<tr>";
    for(let x = 0; x < lista[i].length; x++){
        imprimir += "<td>" + lista[i][x] + "</td>";
    }
    imprimir += "</tr>";
}

imprimir += "</table>";
saida.innerHTML = imprimir;