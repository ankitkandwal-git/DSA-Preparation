const arr = [1,2,3,5]

let xor1 = 0;
let xor2 = 0;
let result;
for(let i=0;i<arr.length;i++){
    xor1 = xor1^i;
    xor2 = xor2^i+1;
    result = xor1^xor2^arr.length;
}
console.log(result)