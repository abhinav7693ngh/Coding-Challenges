/*
What is a subarray/SubString ?

Subarray is a contiguous part in an array.

Total number of subarray in an array is (n*(n+1)/2)



*/



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

let myans = [];
ans.forEach(ele => {
    let toPush = ele.map(my => parseInt(my));
    myans.push(toPush); 
});

console.log(myans);