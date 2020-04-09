process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here


var arr = '';

process.stdin.on('data', function (chunk) {
    arr += chunk;
    arr = arr.split('\n');
    let ncase = arr[0];
    let y = 1;
    while (ncase--) {
        let count = 0;
        let toadd = arr[y].split(' ').map(ele => parseInt(ele));
        let myarr = arr[y + 1].split(' ').map(ele => {
            let myele = parseInt(ele) + toadd[1]
            if (myele % 7 == 0) {
                count++;
            }
        });
        console.log(count);
        y = y + 2;
    }
});
