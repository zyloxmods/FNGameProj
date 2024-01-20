#include "CommonLoadGuard.h"

void UCommonLoadGuard::SetLoadingText(const FText& InLoadingText) {
}

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading) {
}

bool UCommonLoadGuard::IsLoading() const {
    return false;
}

void UCommonLoadGuard::BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const UCommonLoadGuard::FOnAssetLoaded& OnAssetLoaded) {
}

UCommonLoadGuard::UCommonLoadGuard() {
    this->ThrobberAlignment = HAlign_Center;
    this->LoadingText = FText::FromString(TEXT("Loading..."));
    this->TextStyle = NULL;
}

