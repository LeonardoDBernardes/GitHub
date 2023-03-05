let lista = document.getElementById("lista");
let entrada = document.getElementById("novoItem");
let botao = document.getElementById("adicionar");

function novoItem(){
    if(entrada.value === ""){
        alert("Digite algo no campo");
        return;
    }
    let itemLista = document.createElement("li");
    itemLista.textContent = entrada.value;
    lista.appendChild(itemLista);

    entrada.value = "";

}

botao.addEventListener("click", novoItem);

entrada.addEventListener("keydown", (event) => {
    if(event.isComposing || event.keyCode === 229){
        return;
    }

    if(event.key === "Enter"){
        novoItem();
    }
})