const panel = document.querySelector(".panel");
const button = document.getElementsByTagName("button")[0];
const buttonRemove = document.getElementById("remove")
const marcado = document.getElementsByClassName("check")
const tarefasEmCurso = [];

button.addEventListener("click", () => {
    tarefaAdicionada = prompt("Qual a tarefa a ser adicionada?")
    const divCriada = document.createElement("div");
    divCriada.setAttribute("class", "tarefa");
    const input = document.createElement("input");
    input.setAttribute("type", "checkbox");
    input.setAttribute("class", "check");
    divCriada.appendChild(input)
    const paragraph = document.createElement("p")
    paragraph.textContent = tarefaAdicionada;
    divCriada.appendChild(paragraph)
    panel.appendChild(divCriada);
    divCriada.push(tarefasEmCurso);
    console.log(divCriada)
});

buttonRemove.addEventListener("click", () => {
    for(let i = 0; marcado.length; i++){
        if(marcado[i].checked){
            panel.removeChild(this);
        }
    }
})
