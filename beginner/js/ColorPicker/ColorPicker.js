function rgb(){
    var r = document.getElementById("r").value;
    var g = document.getElementById("g").value;
    var b = document.getElementById("b").value;

    var color = "rgb("+r+", "+g+", "+b+");"
    var style = "background-color: "+color;

    var c = document.getElementById("color");
    c.style = style;
    c.innerHTML = "<p>"+color+"</p>";
}
