const arr = [1,2,2,3,4,5,5]

let frequency = 0;
let target = 2;
for(let i=0;i<arr.length;i++){
    if(arr[i]==target){
        frequency+=1;
    }
}
console.log(frequency)