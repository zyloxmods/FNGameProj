#pragma once
#include "CoreMinimal.h"
#include "LastBuildableState.generated.h"

class UBuildingEditModeMetadata;

USTRUCT(BlueprintType)
struct FLastBuildableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* LastBuildableMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LastBuildableMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastBuildableRotationIterations;
    
    FORTNITEGAME_API FLastBuildableState();
};

