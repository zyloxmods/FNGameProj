#include "CustomCharacterData.h"

FCustomCharacterData::FCustomCharacterData() {
    WasPartReplicatedFlags = 0;
    RequiredVariantPartFlags = 0;
    Parts[0] = NULL;
    Parts[1] = NULL;
    Parts[2] = NULL;
    Parts[3] = NULL;
    Parts[4] = NULL;
    Parts[5] = NULL;
    Charms[0] = NULL;
    Charms[1] = NULL;
    Charms[2] = NULL;
    Charms[3] = NULL;
    bReplicationFailed = false;
}

