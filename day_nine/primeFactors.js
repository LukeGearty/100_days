let number = Number(prompt("Enter a positive integer"));

let count = 1;

while (count <= number) {
    let para = document.createElement("p");
    if (number % count == 0) {
        para.innerHTML = count;
        document.body.appendChild(para);
    }
    count++;
}