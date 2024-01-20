#include "AthenaMatchStatView.h"

TArray<UAthenaWeaponStatView*> UAthenaMatchStatView::GetWeaponViews() const {
    return TArray<UAthenaWeaponStatView*>();
}

UAthenaWeaponStatView* UAthenaMatchStatView::GetWeaponViewHighestStat(const FGameplayTag& InStat) const {
    return NULL;
}

TArray<UAthenaWeaponStatView*> UAthenaMatchStatView::GetSortedWeaponViews(const FGameplayTag& InStat) const {
    return TArray<UAthenaWeaponStatView*>();
}

FString UAthenaMatchStatView::GetMatchID() const {
    return TEXT("");
}

FDateTime UAthenaMatchStatView::GetMatchEndTime() const {
    return FDateTime{};
}

UAthenaMatchStatView::UAthenaMatchStatView() {
}

