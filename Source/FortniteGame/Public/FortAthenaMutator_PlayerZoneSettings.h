#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_PlayerSettingsBase.h"
#include "MutatorPlayerSettingsData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerZoneSettings.generated.h"

class AActor;
class UFortPlayerZoneSettingsComponent;

UCLASS(Blueprintable)
class AFortAthenaMutator_PlayerZoneSettings : public AFortAthenaMutator_PlayerSettingsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerZoneSettingsComponent> ZoneSettingsClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PostProcessOverrideActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMutatorPlayerSettingsData ZoneSettingsData;
    
public:
    AFortAthenaMutator_PlayerZoneSettings();
};

