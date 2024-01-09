let number = Number(prompt("Enter a number: "));
let header = document.querySelector("h1");
if (number % 2 == 0) {
    header.innerHTML = number + " is even!";
} 
else {
    header.innerHTML = number + " is odd!";
}