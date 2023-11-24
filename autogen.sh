#!/usr/bin/env bash
set -euo pipefail
mkdir -p build m4
autoreconf --force --install "$@"
