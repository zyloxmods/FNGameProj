#include "FortControllerComponent_ExternalEmote.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_ExternalEmote::PlayEmoteAtIndex(int32 CategoryIndex, int32 EmoteIndex) {
}

void UFortControllerComponent_ExternalEmote::OnRep_ExternalEmotes(TArray<FExternalEmoteCategory>& PreviousExternalEmotes) {
}

TArray<FExternalEmoteCategory> UFortControllerComponent_ExternalEmote::GetExternalEmotes() const {
    return TArray<FExternalEmoteCategory>();
}

void UFortControllerComponent_ExternalEmote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_ExternalEmote, ExternalEmotes);
}

UFortControllerComponent_ExternalEmote::UFortControllerComponent_ExternalEmote() {
    InputComponent = NULL;
}

