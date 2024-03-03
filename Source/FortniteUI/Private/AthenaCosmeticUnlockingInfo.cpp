#include "AthenaCosmeticUnlockingInfo.h"

void UAthenaCosmeticUnlockingInfo::ShowUnlockingInfoForCosmeticVariant(UAthenaCosmeticItemDefinition* InCosmeticItemDef, const FGameplayTag& InVariantChannel, const FGameplayTag& InVariant) {
}

void UAthenaCosmeticUnlockingInfo::ShowUnlockingInfoForCosmetic(UAthenaCosmeticItemDefinition* InCosmeticItemDef) {
}

void UAthenaCosmeticUnlockingInfo::ShowUnlockingInfo(UAthenaCosmeticItemDefinition* UnlockItem, UFortItemDefinition* UnlockSource) {
}

void UAthenaCosmeticUnlockingInfo::ShowSeasonUnlockingInfo(int32 SeasonNumber, int32 TierNumber) {
}




void UAthenaCosmeticUnlockingInfo::OutroAnimFinished() {
}


void UAthenaCosmeticUnlockingInfo::HideUnlockingInfo() {
}

UAthenaCosmeticUnlockingInfo::UAthenaCosmeticUnlockingInfo() {
    this->RichText_StaticUnlockingText = NULL;
    this->RichText_UnlockingText = NULL;
    this->ProgressBar_StepsCompleted = NULL;
    this->RichText_ProgressCompletion = NULL;
    this->CosmeticItemDef = NULL;
}

