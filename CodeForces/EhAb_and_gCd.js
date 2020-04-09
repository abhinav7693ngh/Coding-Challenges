process.stdin.resume();
process.stdin.setEncoding('utf8');
// your code goes here
var arr = '';
process.stdin.on('data', function (chunk) {
    arr += chunk;
    arr = arr.split('\r\n');
    let ncase = arr.length - 1;
    let x = 1;
    while (x < ncase) {
        console.log(arr[x] - 1, 1);
        x++;
    }
});