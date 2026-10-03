const arr = [1,2,0,7,0,9]

let j = 0;
for(let i=0;i<arr.length;i++){
    if(arr[i]==0){
        [arr[i],arr[j]] = [arr[j],arr[i]];
        j++;
    }
}
console.log(arr)