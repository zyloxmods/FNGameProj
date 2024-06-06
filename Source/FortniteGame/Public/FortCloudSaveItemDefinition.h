#pragma once
#include "CoreMinimal.h"
#include "FortMetadataItemDefinition.h"
#include "FortCloudSaveItemDefinition.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortCloudSaveItemDefinition : public UFortMetadataItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContentVersion;
    
public:
    UFortCloudSaveItemDefinition(const FObjectInitializer& ObjectInitializer);
};

