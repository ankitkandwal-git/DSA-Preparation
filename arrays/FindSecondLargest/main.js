const arr = [10,2,33,56,42,17]

let largest = -1;
let secondLargest = -1;

for(const i of arr){
    if(i>largest){
        secondLargest=largest;
        largest = i;
    }
    else if(secondLargest<i && i!=largest){
        secondLargest=i;
    }
}
console.log(secondLargest)