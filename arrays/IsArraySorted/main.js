const arr = [1,2,3,4,9,8]

let sorted = true
let num = arr[0]

for(let i=1;i<arr.length;i++){
    if(arr[i]>arr[i+1]){
        sorted = false;
        break;
    }
}
console.log(sorted)