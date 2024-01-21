#include "PlaylistUserOptionBase.h"

FString UPlaylistUserOptionBase::GetOptionValueNameFromValue(const FString& OptionValue) const {
    return TEXT("");
}

FString UPlaylistUserOptionBase::GetOptionKey(bool bWithScoping) const {
    return TEXT("");
}

UPlaylistUserOptionBase::UPlaylistUserOptionBase() {
    this->OptionMaterial = NULL;
    this->bCanHaveNoOverride = false;
    this->MenuListType = UFortMatchmakingKnobsDataSource::None;
}

