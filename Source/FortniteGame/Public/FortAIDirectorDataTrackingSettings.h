#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FortAIDirectorDataTrackingSettings.generated.h"

class AFortAIDirectorDataManager;

UCLASS(Blueprintable)
class UFortAIDirectorDataTrackingSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAIDirectorDataManager> PlayerDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAIDirectorDataManager> EncounterDataManager;
    
    UFortAIDirectorDataTrackingSettings();
};

