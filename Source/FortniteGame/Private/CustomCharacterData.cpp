#include "CustomCharacterData.h"

FCustomCharacterData::FCustomCharacterData() {
    this->WasPartReplicatedFlags = 0;
    this->RequiredVariantPartFlags = 0;
    this->Parts[0] = NULL;
    this->Parts[1] = NULL;
    this->Parts[2] = NULL;
    this->Parts[3] = NULL;
    this->Parts[4] = NULL;
    this->Parts[5] = NULL;
    this->Charms[0] = NULL;
    this->Charms[1] = NULL;
    this->Charms[2] = NULL;
    this->Charms[3] = NULL;
    this->bReplicationFailed = false;
}

