let arr = [3,1,2];

let ans = new Set();

for(let i = 0;i<arr.length;i++){
    for(let j=0;j<arr.length-i;j++){
        let some = '';
        let support = [];
        for(let k=j;k<=j+i;k++){
            support.push(arr[k]);
        }
        let processed = support.map(ele => some + ' ' + String(ele));
        ans.add(processed);
    }
}

console.log(ans);