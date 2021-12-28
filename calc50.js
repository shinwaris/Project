// Variables to be used
// Shah Sawood
var val = 0.0;

// Function for adding characters to display
function addChar(input, character) {
    if (input.value == null) input.value = character;
    else input.value += character;
}

// Function for deleting characters
function deleteChar(input) {
    if (input.value == 0 || input.value == null || input.value.length == 1) input.value = 0;
    else input.value = input.value.substring(0, input.value.length - 1);
}

// Function for calcuation
function calc(form) {
    form.display.value = eval(form.display.value);
}

// Function for finding square of a number
function square(form) {
    form.display.value = eval(form.display.value) * eval(form.display.value);
}

// Function for finding square root of a number
function sqrt(form) {
    var number = form.display.value;
    if (number > 0) form.display.value = Math.sqrt(form.display.value);
    else alert("Enter a number");
}

// Function for solving exponents
function LOG(form) {
    let number = form.display.value;
    if (number > 0) form.display.value = Math.log10(form.display.value);
    else alert("Enter a positive number!");
}

// Checking proper usage
function checkNum(str) {
    for (var i = 0; i < str.length; i++) {
        var ch = str.charAt(i);
        if (ch < "0" || ch > "9") {
            if (ch != "/" && ch != "*" && ch != "+" && ch != "-" && ch != ".") {
                alert("Only valid operators can be used!");
                return false;
            }
        }
    }
    return true;
}

// Function for calculating sin
function sin(form) {
    num = form.display.value;
    num *= ((22 / 7) / 180);
    form.display.value = Math.sin(num);
}

// Function for calculating cos
function cos(form) {
    num = form.display.value;
    num *= ((22 / 7) / 180);
    form.display.value = Math.cos(num);
}

// Function for calculating tan
function tan(form) {
    num = form.display.value;
    num *= ((22 / 7) / 180);
    form.display.value = Math.tan(num);
}
