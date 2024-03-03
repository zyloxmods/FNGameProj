#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MarshalledVFXAuthoredData.h"
#include "MarshalledVFX_AuthoredDataConfig.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UMarshalledVFX_AuthoredDataConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarshalledVFXAuthoredData Data;
    
    UMarshalledVFX_AuthoredDataConfig();
};

