const acordeon = document.getElementsByClassName("trigger")
let i;

for(i = 0; i < acordeon.length; i++) {
    acordeon[i].addEventListener("click", function() {
        this.classList.toggle("active");
        let content = this.nextElementSibling;
        if(content.style.display === "block") {
            content.style.display = 'none';
        } else {
            content.style.display = 'block';
        }
    });
}