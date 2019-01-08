#!/bin/bash

################################################################################################################################################################

# @project        Library/IO
# @file           tools/python/exec.sh
# @author         Lucas Brémond <lucas.bremond@gmail.com>
# @license        Apache License 2.0

################################################################################################################################################################

script_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Setup environment

source "${script_directory}/../.env"

# Exec Docker container

docker exec \
-it \
"${container_name}-notebook" \
/bin/bash

################################################################################################################################################################