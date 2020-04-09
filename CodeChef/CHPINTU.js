process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here

var arr = '';

process.stdin.on('data', function (chunk) {
    arr += chunk;
});

process.stdin.on('end', function () {
    arr = arr.split('\n');
    let ncase = arr[0], i = 1, x = 2, y = 3;
    while (i <= ncase) {
        let input1 = arr[x];
        let first = input1.split(' ');
        let input2 = arr[y];
        let second = input2.split(' ');
        i = i + 1;
        x = x + 3;
        y = y + 3;


        let myObj = {};
        for (let i = 0; i < first.length; i++) {
            if (!myObj[first[i]]) {
                myObj[first[i]] = parseInt(0);
                myObj[first[i]] = parseInt(myObj[first[i]]) + parseInt(second[i]);
            }
            else {
                myObj[first[i]] = parseInt(myObj[first[i]]) + parseInt(second[i]);
            }
        }
        // first.forEach(ele,index) => {
        //     if(!myObj[ele]){
        //         myObj[ele] = parseInt(0);
        //         myObj[ele] = parseInt(myObj[ele]) +  parseInt(second[index]);
        //     }
        //     else{
        //         myObj[ele] = parseInt(myObj[ele]) + parseInt(second[index]);
        //     }
        // });

        let ans = Object.values(myObj);
        console.log(Math.min(...ans));
    }
});
