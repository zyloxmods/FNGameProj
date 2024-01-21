#pragma once
#include "CoreMinimal.h"
#include "TeamSettingsData.generated.h"

class UFortTeamSettingsComponent;

USTRUCT(BlueprintType)
struct FTeamSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTeamSettingsComponent* TeamSettings;
    
    FORTNITEGAME_API FTeamSettingsData();
};

