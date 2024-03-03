#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_PlayerSettingsBase.h"
#include "MutatorPlayerSettingsData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerTeamSettings.generated.h"

class AFortMinigame;
class UFortPlayerTeamSettingsComponent;
class UObject;

UCLASS(Blueprintable)
class AFortAthenaMutator_PlayerTeamSettings : public AFortAthenaMutator_PlayerSettingsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerTeamSettingsComponent> TeamSettingsClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FMutatorPlayerSettingsData> TeamSettingsDataMap;
    
public:
    AFortAthenaMutator_PlayerTeamSettings();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
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
    UFortPlayerTeamSettingsComponent* GetComponentForEnabledSetting(const FName PropertyName, bool bFallbackToDefaultTeam) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddDataSourceForTeam(uint8 TeamIndex, const UObject* DataSource);
    
};

