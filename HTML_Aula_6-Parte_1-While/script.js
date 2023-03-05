var contagem = 0;
var saida = document.getElementById("saida");
var imprimir = "";

while(contagem < 10000){
    // alert(contagem);
    imprimir += contagem + "<br>";
    contagem += 1;
}
saida.innerHTML = imprimir;
