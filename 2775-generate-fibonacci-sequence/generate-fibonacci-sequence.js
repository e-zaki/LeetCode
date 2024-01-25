/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a0 = 0, a1 = 1;
    while (true) {
        yield a0;
        a1 += a0;
        a0 = a1 - a0;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */