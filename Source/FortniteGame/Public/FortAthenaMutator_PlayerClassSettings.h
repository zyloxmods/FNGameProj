#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_PlayerSettingsBase.h"
#include "MutatorPlayerSettingsData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerClassSettings.generated.h"

class AFortMinigame;
class UFortPlayerClassSettingsComponent;
class UObject;

UCLASS(Blueprintable)
class AFortAthenaMutator_PlayerClassSettings : public AFortAthenaMutator_PlayerSettingsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumClassSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerClassSettingsComponent> ClassSettingsClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FMutatorPlayerSettingsData> ClassSettingsDataMap;
    
public:
    AFortAthenaMutator_PlayerClassSettings();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupGameRulesForClassContext(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void SetClassContext(uint8 ClassSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveDataSource(const UObject* DataSource);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetClassContext() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddDataSourceForPlayerClass(uint8 ClassSlotIndex, const UObject* DataSource);
    
};

