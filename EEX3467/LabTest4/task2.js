function printSequence() {
  let num1 = parseInt(document.getElementById("num1").value);
  let num2 = parseInt(document.getElementById("num2").value);

  if (isNaN(num1) || isNaN(num2)) {
    alert("You must enter a valid number");
    return;
  }

  if (num1 > num2) {
    alert("The first number should be smaller than the second number");
    document.body.style.backgroundColor = "red";
    return;
  }

  let sequence = "";
  let total = 0;
  for (let i = num1; i <= num2; i++) {
    sequence += i + "<br>";
    total += i;
  }
  document.getElementById("output").innerHTML = sequence + "Total: " + total;
}

function resetData() {
  document.getElementById("num1").value = "";
  document.getElementById("num2").value = "";
  document.getElementById("output").innerHTML = "";
  document.body.style.backgroundColor = "white";
}
