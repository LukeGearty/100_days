let userName = prompt("What is your name?");

let paragraph = document.querySelectorAll("p").item(2);

paragraph.innerHTML = "Happy birthday dear " + userName + "!"; 