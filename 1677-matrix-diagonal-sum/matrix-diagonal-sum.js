/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
    let sum = 0, len = mat.length;
    for (let i = 0; i < len; i++) {
        sum += mat[i][i];
        sum += mat[i][len-1-i];
    }
    return !(len--%2) ? sum : sum - mat[len/2][len/2];
};