const arr = [1,1,2,3,4,4,5]

const unique = []
for(const i of arr){
    if(!unique.includes(i)){
        unique.push(i);
    }
}
console.log(unique)