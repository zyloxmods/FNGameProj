#include "CustomCharacterParts.h"

FCustomCharacterParts::FCustomCharacterParts() {
    this->WasReplicatedFlags = 0;
    this->Parts[0] = NULL;
    this->Parts[1] = NULL;
    this->Parts[2] = NULL;
    this->Parts[3] = NULL;
    this->Parts[4] = NULL;
    this->Parts[5] = NULL;
    this->bReplicationFailed = false;
}

