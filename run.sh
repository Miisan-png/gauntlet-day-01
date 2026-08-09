#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")"

case "${1:-}" in
ex0)
    dir=ex0
    bin=vec2
    ;;
ex1)
    dir=ex1
    bin=timer
    ;;
ex2)
    dir=ex2
    bin=spawner
    ;;
*)
    echo "run wth: ./run.sh ex0|ex1|ex2" >&2
    exit 1
    ;;
esac

make -C "$dir"
"./$dir/$bin"
