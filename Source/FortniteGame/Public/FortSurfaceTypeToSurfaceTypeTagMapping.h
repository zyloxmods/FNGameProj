#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSurfaceTypeToSurfaceTypeTag.h"
#include "FortSurfaceTypeToSurfaceTypeTagMapping.generated.h"

UCLASS(Blueprintable)
class UFortSurfaceTypeToSurfaceTypeTagMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSurfaceTypeToSurfaceTypeTag> TypeToTagMapping;
    
public:
    UFortSurfaceTypeToSurfaceTypeTagMapping();
};

