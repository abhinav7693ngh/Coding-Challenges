let my = [1,1,1,2,1,1];


let count = 0;

let myset = {};
let comb = [];
for(let i=0;i<(my.length)/2;i++){
    let so = new Set();
    let one = my.slice(0,(my.length)/2);
    let second = my.slice((my.length)/2,my.length);
    for(let k of one){
        so.add(k);
    }
    if(so.size == 1){
        count++;
    }
    so.clear();
    for(let k of second){
        so.add(k);
    }
    if (so.size == 1) {
        count++;
    }
    let popped = my.pop();
    my.unshift(popped);
}
console.log(count);