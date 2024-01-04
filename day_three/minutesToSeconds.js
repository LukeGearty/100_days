let minutes = prompt("Enter your time in minutes: ");

let seconds = minutes * 60;

let paragraph = document.querySelector("p");

paragraph.innerHTML += seconds + " seconds";