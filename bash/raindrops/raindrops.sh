#!/usr/bin/env bash

main () {
  local number=$1
  local sounds=()

  (( number % 3 == 0 )) && sounds+=(Pling)
  (( number % 5 == 0 )) && sounds+=(Plang)
  (( number % 7 == 0 )) && sounds+=(Plong)

  if (( ${#sounds[@]} == 0 )); then
    echo "$number"
  else
    for sound in "${sounds[@]}"; do
      echo -n "$sound"
    done
  fi
}

main "$@"
