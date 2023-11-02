const jogoDaVelha = {
    view:{
        spaces: new Array(...(document.getElementsByClassName("space"))),
        time: document.getElementsByClassName("stats tempo")[0].firstElementChild
    },
    values:{
        
    },
    actions:{
    },
}

console.log(jogoDaVelha.view.time)


jogoDaVelha.view.spaces.forEach(element => {
    element.addEventListener("click", () => {
        if(element.classList == "X"){
            element.classList.remove("X")
        }
        element.classList.add("X")
        console.log("CLicou")
    })
});
