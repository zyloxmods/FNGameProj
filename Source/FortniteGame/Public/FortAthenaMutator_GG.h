#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "GunGameGunEntries.h"
#include "GunGameGunEntry.h"
#include "GunGamePlayerData.h"
#include "LocalPlayerWeaponProgressedDelegate.h"
#include "OtherPlayerWeaponProgressedDelegate.h"
#include "FortAthenaMutator_GG.generated.h"

class AActor;
class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_GG : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseInfiniteAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GameIsReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ElimsWithFinalTierToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGunGameGunEntry> WeaponEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> IntroMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CachedContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGunGameGunEntries> AwardEntriesAtElimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, FGunGamePlayerData> PlayerData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalPlayerWeaponProgressed OnLocalPlayerAwardedWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtherPlayerWeaponProgressed OnOtherPlayerAwardedWeapon;
    
    AFortAthenaMutator_GG();
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase Phase);
    
};

