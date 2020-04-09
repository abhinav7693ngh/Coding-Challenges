process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here



class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class Stack {
    constructor() {
        this.head = null;
        this.length = 0;
    }
    push(value) {
        let newNode = new Node(value);
        if (this.head == null) {
            this.head = newNode;
            this.length++;
        }
        else {
            newNode.next = this.head;
            this.head = newNode;
            this.length++;
        }
    }
    pop() {
        let myans;
        if (this.head == null) {
            return false;
        }
        else {
            if (this.length == 1) {
                myans = this.head.value;
                this.head = null;
                this.length--;
            }
            else if (this.length > 1) {
                myans = this.head.value;
                let toPoint = this.head.next;
                this.head = toPoint;
                this.length--;
            }
        }
        return myans;
    }
    top() {
        if (this.length == 0) {
            return false;
        }
        else {
            return this.head.value;
        }
    }
    empty() {
        this.head = 0;
        this.length = 0;
    }
}


function move(start, possible, childStack, trackStack, myans) {
    while (trackStack.length > 0) {
        let toProcess = String(start).split('').map(ele => parseInt(ele));
        let startX = toProcess[0];
        let startY = toProcess[1];
        let move1X = startX + 1;
        let move1Y = startY + 1;
        let move1 = parseInt(`${String(move1X)}${String(move1Y)}`);
        if ((move1X <= 8 && move1X >= 1) && (move1Y <= 8 && move1Y >= 1) && !possible[move1]) {
            childStack.push(move1);
        }
        let move2X = startX + 1;
        let move2Y = startY - 1;
        let move2 = parseInt(`${String(move2X)}${String(move2Y)}`);
        if ((move2X <= 8 && move2X >= 1) && (move2Y <= 8 && move2Y >= 1) && !possible[move2]) {
            childStack.push(move2);
        }
        let move3X = startX - 1;
        let move3Y = startY + 1;
        let move3 = parseInt(`${String(move3X)}${String(move3Y)}`);
        if ((move3X <= 8 && move3X >= 1) && (move3Y <= 8 && move3Y >= 1) && !possible[move3]) {
            childStack.push(move3);
        }
        let move4X = startX - 1;
        let move4Y = startY - 1;
        let move4 = parseInt(`${String(move4X)}${String(move4Y)}`);
        if ((move4X <= 8 && move4X >= 1) && (move4Y <= 8 && move4Y >= 1) && !possible[move4]) {
            childStack.push(move4);
        }
        if (childStack.length != 0) {
            let nextNode = childStack.pop();
            trackStack.push(nextNode);
            myans.push(nextNode);
            possible[nextNode] = true;
            childStack.empty();
            move(nextNode, possible, childStack, trackStack, myans);
        }
        if (childStack.length == 0) {
            let some = trackStack.pop();
            let myTop = trackStack.top();
            if (myTop) {
                myans.push(myTop);
            }
            move(myTop, possible, childStack, trackStack, myans);
        }
    }
}


function starter(start) {
    let childStack = new Stack();
    let trackStack = new Stack();
    let myans = [];
    let possible = {
        11: false,
        13: false,
        15: false,
        17: false,
        22: false,
        24: false,
        26: false,
        28: false,
        31: false,
        33: false,
        35: false,
        37: false,
        42: false,
        44: false,
        46: false,
        48: false,
        51: false,
        53: false,
        55: false,
        57: false,
        62: false,
        64: false,
        66: false,
        68: false,
        71: false,
        73: false,
        75: false,
        77: false,
        82: false,
        84: false,
        86: false,
        88: false,
    }
    possible[start] = true;
    trackStack.push(start);
    move(start, possible, childStack, trackStack, myans);
    let final = myans.map(ele => String(ele).split('').join(' '));
    console.log(final.length);
    final.forEach(ele => console.log(ele));
}




var arr = '';

process.stdin.on('data', function (chunk) {
    arr += chunk;
    arr = arr.split('\n');
    let ncase = arr[0];
    let x = 1;
    while (x <= ncase) {
        let rough = arr[x].split(' ');
        let toProcess = parseInt(String(rough[0] + String(rough[1])));
        starter(toProcess);
        x++;
    }
});