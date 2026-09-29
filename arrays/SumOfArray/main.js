const arr = [10,20,30,40,50]

// let totalSum = 0;

// for(const i of arr){
//     totalSum+=i
// }
// console.log(totalSum)

const sum = arr.reduce((acc,curr)=>acc+curr,0);
console.log(sum)