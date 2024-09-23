#!/bin/bash

name=$1
cat > "${name}.cpp" <<EOF
class $name {
public:
    $name();
    ~$name();
    
private:
    int attribute;
};
EOF
