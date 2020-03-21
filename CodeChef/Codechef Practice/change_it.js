console.log('Change it !');

let myInp = [1,2,1,4,5,5];

let hash = {};

myInp.forEach(ele => {
    if(hash[ele]){
        hash[ele]++;
    }
    else{
        hash[ele] = 1;
    }
});
let mymax = -Infinity;

for(let i of Object.values(hash)){
    if(i>=mymax){
        mymax = i;
    }
};

console.log(hash);
console.log(myInp.length - mymax);