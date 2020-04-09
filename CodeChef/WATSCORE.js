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
        let score = 0;
        let hash = {};
        let questions = arr[y];
        y++;
        while (questions--) {
            let myarr = arr[y].split(' ').map(ele => parseInt(ele));
            if (hash.hasOwnProperty(myarr[0]) && myarr[0] != 9 && myarr[0] != 10 && myarr[0] != 11) {
                if (hash[myarr[0]] < myarr[1]) {
                    score = score - hash[myarr[0]];
                    hash[myarr[0]] = myarr[1];
                    score = score + myarr[1];
                }
            }
            else {
                if (myarr[0] != 9 && myarr[0] != 10 && myarr[0] != 11) {
                    hash[myarr[0]] = myarr[1];
                    score = score + myarr[1];
                }
            }
            y++;
        }
        console.log(score);
        y = y++;
    }
});