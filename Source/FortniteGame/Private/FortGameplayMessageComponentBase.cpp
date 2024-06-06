#include "FortGameplayMessageComponentBase.h"
#include "Net/UnrealNetwork.h"

void UFortGameplayMessageComponentBase::SetChannelId(const FGameplayTagContainer& NewChannelIds) {
}

void UFortGameplayMessageComponentBase::OnRep_ChannelIds() {
}

bool UFortGameplayMessageComponentBase::IsEnabled() const {
    return false;
}

bool UFortGameplayMessageComponentBase::IsChannelIdSet() const {
    return false;
}

FText UFortGameplayMessageComponentBase::GetMessageName() const {
    return FText::GetEmpty();
}

FText UFortGameplayMessageComponentBase::GetMessageDescription() const {
    return FText::GetEmpty();
}

int32 UFortGameplayMessageComponentBase::GetMessageChannelIndex() const {
    return 0;
}

FText UFortGameplayMessageComponentBase::GetDisabledReason() const {
    return FText::GetEmpty();
}

FGameplayTagContainer UFortGameplayMessageComponentBase::GetChannelId() const {
    return FGameplayTagContainer{};
}

void UFortGameplayMessageComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameplayMessageComponentBase, ChannelIds);
}

UFortGameplayMessageComponentBase::UFortGameplayMessageComponentBase() {
    WeightOffset = 0;
    EditWidget = NULL;
}

