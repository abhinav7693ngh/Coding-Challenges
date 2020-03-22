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
        let queries = arr[y].split(' ').map(ele => parseInt(ele));
        y++;
        let myarr = arr[y].split(' ').map(ele => parseInt(ele));
        y++;
        while (queries[1]--) {
            let tocheck = arr[y].split(' ');
            let second = tocheck.slice(1, 3).map(ele => parseInt(ele) - 1);
            let sum = 0;
            for (let i = second[0]; i <= second[1]; i++) {
                sum = sum + myarr[i];
            }
            if (tocheck[0] == 'Q') {
                let newstart = second[0] - 1;
                let newend = second[1] + 1;
                //console.log(newstart,newend);
                let startarr = [];
                let startsum = 0;
                let endsum = 0;
                let endarr = [];
                while (newstart >= 0) {
                    startsum = startsum + myarr[newstart];
                    console.log(startsum);
                    startarr.push(startsum);
                    newstart--;
                }
                let startmax = Math.max(...startarr);
                while (newend < myarr.length) {
                    endsum = endsum + myarr[newend];
                    endarr.push(endsum);
                    newend++;
                }
                let endmax = Math.max(...endarr);
                sum = sum + startmax + endmax;
                //console.log(sum);
            }
            else {
                myarr[second[0] - 1] = second[1];
            }
            y++;
        }
        y++;
    }
});

