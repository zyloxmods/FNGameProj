#pragma once
#include "CoreMinimal.h"
#include "GCSettingsOverride.generated.h"

USTRUCT(BlueprintType)
struct FGCSettingsOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGCOnServerDuringMatch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GCFrequency;
    
    FORTNITEGAME_API FGCSettingsOverride();
};

