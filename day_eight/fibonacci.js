let num = Number(prompt("Enter the length of the fibonacci sequence you want"));

let first = 0;
let second = 1;
let fibonacci = [first, second];
length = num - 2;

let firstNum = document.createElement("p");
firstNum.innerHTML = first;
let secondNum = document.createElement("p");
secondNum.innerHTML = second;


if (num === 1) {
    document.body.appendChild(firstNum);
} else if (num === 2) {
    document.body.appendChild(firstNum);
    document.body.appendChild(secondNum);
}
else {
    document.body.appendChild(firstNum);
    document.body.appendChild(secondNum);
    while (length > 0) {
        let currentNum = document.createElement("p");
        currentNum.innerHTML = (first + second);
        document.body.appendChild(currentNum);
        let temp = second;
        second = first + second;
        first = temp;
        length--;
    }
}
