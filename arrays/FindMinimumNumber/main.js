const arr = [10,12,1,45,22]

let smallest = arr[0]

for(const i of arr){
    if(i<smallest){
        smallest=i;
    }
}
console.log(smallest)