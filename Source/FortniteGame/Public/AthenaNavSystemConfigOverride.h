#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavSystemConfigOverride.h"
#include "AthenaNavSystemConfigOverride.generated.h"

UCLASS(Blueprintable)
class AAthenaNavSystemConfigOverride : public ANavSystemConfigOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> DirtyAreas;
    
public:
    AAthenaNavSystemConfigOverride();
    UFUNCTION(BlueprintCallable)
    void LoadPreviewLevels();
    
};

