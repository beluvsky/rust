// xfail-fast

fn main() {
    loop foo: {
        loop {
            break foo;
        }
    }
}

