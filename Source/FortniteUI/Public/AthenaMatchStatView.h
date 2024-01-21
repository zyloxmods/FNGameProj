#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AthenaBaseStatView.h"
#include "AthenaMatchStatView.generated.h"

class UAthenaWeaponStatView;

UCLASS(Blueprintable)
class UAthenaMatchStatView : public UAthenaBaseStatView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaWeaponStatView*> WeaponStatViews;
    
public:
    UAthenaMatchStatView();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAthenaWeaponStatView*> GetWeaponViews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaWeaponStatView* GetWeaponViewHighestStat(const FGameplayTag& InStat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAthenaWeaponStatView*> GetSortedWeaponViews(const FGameplayTag& InStat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMatchID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetMatchEndTime() const;
    
};

