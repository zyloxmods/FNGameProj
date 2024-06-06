#include "PlaylistUserOptionBase.h"

FString UPlaylistUserOptionBase::GetOptionValueNameFromValue(const FString& OptionValue, bool bAllowNoOverride) const {
    return TEXT("");
}

FString UPlaylistUserOptionBase::GetOptionKey(bool bWithScoping) const {
    return TEXT("");
}

UPlaylistUserOptionBase::UPlaylistUserOptionBase() {
    OptionMaterial = NULL;
    bCanHaveNoOverride = false;
    MenuListType = UFortMatchmakingKnobsDataSource::None;
    WeightOffset = 0;
    EditWidget = NULL;
}

