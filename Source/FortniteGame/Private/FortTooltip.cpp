#include "FortTooltip.h"

void UFortTooltip::SetLocalizationText(const FString& Name, FText Value) {
}

void UFortTooltip::SetLocalizationInt(const FString& Name, int32 Value) {
}

void UFortTooltip::SetLocalizationFloat(const FString& Name, float Value) {
}

bool UFortTooltip::GetValueData(const UObject* ObjectToDescribe, const UFortTooltipContext* Context, const FGameplayTag& Token, FFortTooltipValueData& OutData) const {
    return false;
}

bool UFortTooltip::GetTokenizedDescriptionText(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, TArray<FText>& OutDescription) const {
    return false;
}

bool UFortTooltip::GetTextForToken(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const {
    return false;
}

bool UFortTooltip::GetNumericValue(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, float& OutVal) const {
    return false;
}

bool UFortTooltip::BP_GetValueData_Implementation(const UObject* ObjectToDescribe, const UFortTooltipContext* Context, const FGameplayTag& Token, FFortTooltipValueData& OutData) const {
    return false;
}

bool UFortTooltip::BP_GetTokenizedDescriptionText_Implementation(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, TArray<FText>& OutDescription) const {
    return false;
}

bool UFortTooltip::BP_GetTextForToken_Implementation(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const {
    return false;
}

bool UFortTooltip::BP_GetNumericValue_Implementation(const UObject* ObjectToDescribe, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, float& OutVal) const {
    return false;
}

UFortTooltip::UFortTooltip() {
}

