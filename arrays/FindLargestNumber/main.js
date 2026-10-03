const arr = [10,20,30,50,90]

let maxi = arr[0]

for(const i of arr){
    if(i>maxi){
        maxi = i;
    }
}
console.log(maxi)