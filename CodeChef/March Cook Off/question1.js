console.log('This is question 1');


let tocheck = 'LLLRUUD';
let some = tocheck.split('');
let x=0;
let y=0;
let xaxis = true;
let yaxis = true;

some.forEach(ele => {
    if((ele == 'L' || ele == 'R') && xaxis){
        if(ele == 'L'){
            x--;
        }
        else{
            x++;
        }
        xaxis = false;
        yaxis = true;
    }
    if((ele == 'U' || ele == 'D') && yaxis){
        if(ele == 'U'){
            y++;
        }
        else{
            y--;
        }
        xaxis = true;
        yaxis = false;
    }
});

console.log(x,y);

