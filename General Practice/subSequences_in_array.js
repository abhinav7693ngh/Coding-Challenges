// What is a subsequence ?
// subSequence is a sequence that can be derived from another sequence by deleting some elements without changing the order


function helper(arr,indexQueue,ans){
    if(indexQueue.length <= 0){
        return;
    }
    else{
        let fix = indexQueue.pop();
        let multiIndex = fix.split(' ');
        let arrayEle = multiIndex.map(ele => arr[parseInt(ele)]);
        ans.add(arrayEle.join(' '));
        let lastFix = parseInt(multiIndex[multiIndex.length - 1]);
        for(let i=lastFix + 1;i<arr.length;i++){
            let toenqueue = fix + ' ' + String(i);
            indexQueue.unshift(toenqueue);
            arrayEle.push(arr[i]);
            let toadd = arrayEle.join(' ');
            ans.add(toadd);
        }
        helper(arr,indexQueue,ans);
    }
}



function driver(){
    let ans = new Set();
    let indexQueue = [];
    const arr = [1,2];
    for(let i in arr){
        indexQueue.unshift(i);
        ans.add(String(arr[i]));
        helper(arr,indexQueue,ans);
    }
    console.log(ans);
}
driver();

