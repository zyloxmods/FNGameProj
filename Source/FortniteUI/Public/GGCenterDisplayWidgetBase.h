#pragma once
#include "CoreMinimal.h"
#include "GGCenterDisplayEntry.h"
#include "GGWidgetBase.h"
#include "GGCenterDisplayWidgetBase.generated.h"

class AFortPlayerStateAthena;
class UFortWeaponItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UGGCenterDisplayWidgetBase : public UGGWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSlotsFlankingLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGCenterDisplayEntry> CenterDisplayEntries;
    
public:
    UGGCenterDisplayWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayWith(const TArray<FGGCenterDisplayEntry>& Entries, bool bUpdatingForLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnOtherPlayerAwardedWeapon(AFortPlayerStateAthena* OtherPlayer, UFortWeaponItemDefinition* NextWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerAwardedWeapon(UFortWeaponItemDefinition* NextWeapon);
    
};

