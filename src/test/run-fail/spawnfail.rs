// xfail-win32
// error-pattern:explicit
use std;
import task;

// We don't want to see any invalid reads
fn main() {
    fn f() {
        fail;
    }
    task::spawn(|| f() );
}