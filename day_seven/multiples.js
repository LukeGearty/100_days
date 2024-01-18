let number = 1;

while (number < 1000) {

    if (number % 3 == 0 && number % 5 == 0) {
        let para = document.createElement("p");
        para.innerHTML = number;
        document.body.appendChild(para);
    }
    number = number + 1;
}