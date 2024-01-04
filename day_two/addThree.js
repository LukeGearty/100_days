let numOne = Number(prompt("Enter a number: "));
let numTwo = Number(prompt("Enter a second number: "));
let numThree = Number(prompt("Enter a third number: "));

let result = numOne + numTwo + numThree;

let printed = document.querySelector("p");

printed.innerHTML = result;

