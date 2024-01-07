let num = prompt("Enter a number: ");
num = Number(num);
let header = document.querySelector("h1");

while (num > 0) {
    alert("Going in " + num);
    num -= 1;
}
if (num == 0) {
    header.innerHTML = "Explode!";
}