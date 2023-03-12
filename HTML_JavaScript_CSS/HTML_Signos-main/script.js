let ano = prompt("Digite o seu Ano de nascimento");

let numero = ano - 1900;

switch(numero%12){
    case 0:
        alert("Rato");
        break;
    case 1:
        alert("Búfalo");
        break;
    case 2:
        alert("Tigre");
        break;
    case 3:
        alert("Coelho");
        break;
    case 4:
        alert("Dragão");
        break;
    case 5:
        alert("Serpente");
        break;
    case 6:
        alert("Cavalo");
        break;
    case 7:
        alert("Cabra");
        break;
    case 8:
        alert("Macaco");
        break;
    case 9:
        alert("Cão");
        break;
    case 10:
        alert("Galo");
        break;
    case 11:
        alert("Javali");
        break;
    default:
        alert("Erro");
        break;
}