#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GravityMovementData.h"
#include "TeamSettingsData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_TeamSettings.generated.h"

class AFortMinigame;
class UFortTeamSettingsComponent;
class UObject;

UCLASS(Blueprintable)
class AFortAthenaMutator_TeamSettings : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTeamSettingsComponent> TeamSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGravityMovementData> GravityData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FTeamSettingsData> TeamSettingsDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTeamSettingsComponent* DefaultTeamSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTeamSettingsComponent* CurrentTeamSettings;
    
public:
    AFortAthenaMutator_TeamSettings();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupGameRulesForTeamContext(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamContext(uint8 TeamIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveDataSource(const UObject* DataSource);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTeamContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTeamSettingsComponent* GetComponentForEnabledSetting(const FName& PropertyName, bool bFallbackToDefaultTeam) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddDataSourceForTeam(uint8 TeamIndex, const UObject* DataSource);
    
};

