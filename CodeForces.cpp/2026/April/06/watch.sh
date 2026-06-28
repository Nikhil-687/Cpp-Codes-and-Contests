#!/bin/bash

WATCH_DIR="."

while true; do
    FILE=$(inotifywait -e close_write --format '%f' $WATCH_DIR)

    if [[ "$FILE" == *.cpp ]]; then
        BASENAME="${FILE%.cpp}"
        echo "⚡ Detected change in $FILE"

        g++ -o "$BASENAME" "$FILE"

        if [ $? -eq 0 ]; then
            echo "✅ Compiled successfully"
            cat input | ./"$BASENAME" > output
            echo "🚀 Output updated"
        else
            echo "❌ Compilation error"
        fi
    fi
done
