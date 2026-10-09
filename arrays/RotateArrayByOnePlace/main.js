
function rotateByOne(arr,n){
    let temp = arr[0];
    for(let i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

// Example usage:
let arr = [1, 2, 3, 4, 5];
let n = arr.length;
rotateByOne(arr, n);
console.log("Array after rotation: " + arr);