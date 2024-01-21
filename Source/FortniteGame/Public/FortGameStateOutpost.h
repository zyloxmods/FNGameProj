#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStormShieldDefense.h"
#include "FortGameStateZone.h"
#include "IronCityDifficultyInfo.h"
#include "FortGameStateOutpost.generated.h"

class UFortRegisteredPlayerInfo;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateOutpost : public AFortGameStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOutpostDefenseActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWargameActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EStormShieldDefense StormShieldDefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortRegisteredPlayerInfo*> IronCityEarlyPlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IronCityLowestPlayerAccountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IronCityMinPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IronCityMaxPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIronCityDifficultyInfo IronCityDifficultyInfo;
    
public:
    AFortGameStateOutpost();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo);
    
};

