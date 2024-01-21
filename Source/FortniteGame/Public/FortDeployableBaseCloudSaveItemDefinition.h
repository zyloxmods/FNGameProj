#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCloudSaveItemDefinition.h"
#include "FortDeployableBaseCloudSaveItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDeployableBaseCloudSaveItemDefinition : public UFortCloudSaveItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SaveFilenameGUID;
    
public:
    UFortDeployableBaseCloudSaveItemDefinition();
};

