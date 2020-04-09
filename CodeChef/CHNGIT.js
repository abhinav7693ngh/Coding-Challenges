process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here


var arr = '';

process.stdin.on('data', function (chunk) {
    arr += chunk;
    arr = arr.split('\n');
    let ncase = arr[0];
    let y = 2;
    while (ncase--) {
        let hash = {};
        let myarr = arr[y].split(' ').map(ele => parseInt(ele));
        myarr.forEach(ele => {
            if (hash[ele]) {
                hash[ele]++;
            }
            else {
                hash[ele] = 1;
            }
        });
        let mymax = -Infinity;

        for (let i of Object.values(hash)) {
            if (i >= mymax) {
                mymax = i;
            }
        };
        console.log(myarr.length - mymax);
        y = y + 2;
    }
});